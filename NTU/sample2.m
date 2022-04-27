clc
xdata = [100; 105; 110; 115; 120; 125; 125; 130; 135; 140; 145; 150];
ydata = [300; 290; 303; 305; 302; 298; 297; 303; 307; 302; 296; 304];

AB = polyfit(xdata, ydata, 1);

xvalue = 50:2:200;
yvalue = polyval(AB, xvalue);

for i=1:length(xdata)
    error(i) = abs(AB(1)*xdata(i)-ydata(i)+AB(2))/sqrt(1+AB(1)^2);
end

mu = mean(error);
a = AB(1);
b = AB(2);
sigma = sqrt(cov(error));

wdf = cov(error);

upper = 0;

for j=1:length(error)
    upper = upper + (error(j)-mu)^2
end

new_cov = upper / 11;