% Tarea 3
% Esteban Rivera

% Load .dat data and export to a double array
load ('C:\Users\riveraes\Documents\LaptopPublic\Maestria\MP6157_Adquisicion y procesamiento de datos\DualToneMultiFrequency\matlab.dat');
% Extract data from loaded file
Signal = matlab(:,1);
%Time = matlab(:,2);

Fs = 10000;           % Sampling frequency
T = 1/Fs;             % Sampling period
                      % Length of signal
L = length(Signal);
t =(1:L)*T;

subplot(2,1,1);
plot(t,Signal)
title('WaveDAC8 - 2000 Samples (Fs = 10KHz)');
xlabel('Time [s]');
ylabel('f(t) [V]');
grid on

% Fourier
Signal = Signal - mean(Signal);
%mean = mean(Signal);
Y = fft(Signal);

P2 = abs(Y/L);
P1 = P2(1:L/2+1);
P1(2:end-1) = 2*P1(2:end-1);

f =Fs*(0:(L/2))/L;
subplot(2,1,2);
%plot(f,P1)
stem(f,P1)
title('Single-Sided Amplitude Spectrum')
xlabel('Frequency [Hz]')
ylabel('|Y(f)|')
grid on


