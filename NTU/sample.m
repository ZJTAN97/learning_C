clc

% xdata = [2 1; 2 1; 3 1; 3 1; 4 1; 4 1; 5 1; 5 1];
xdata = [2; 2; 3; 3; 4; 4; 5; 5];


ydata = [1; 2; 2; 3; 3; 4; 4; 5];

AB = polyfit(xdata, ydata, 1);

a = AB(1)
b = AB(2)

xvalue = 0:0.1:8;
yvalue = polyval(AB, xvalue)


for i = 1:length(xdata)
    error(i) = abs(AB(1)*xdata(i)-ydata(i)+AB(2))/sqrt(1+AB(1)^2);
end


sigma = sqrt(cov(error));

% U = xdata;
% U_t = xdata.';
% V = ydata;
% 
% inbetween1 = U_t * U;
% 
% inbetween1inv = inv(inbetween1);
% 
% inbetween2 = U_t*V;
% 
% ans = inv(U_t*U)*(U_t*V);
% 
% ans
% 
% test_cov = sqrt(cov(error));


% plot(xdata, ydata, 'ro', xvalue, yvalue, 'b*')