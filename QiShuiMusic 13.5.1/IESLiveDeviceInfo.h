@interface IESLiveDeviceInfo : NSObject
+ (id)carrierMCCMNC;
+ (long long)defaultPreferredInterfaceOrientation;
+ (long long)defaultPreferredInterfaceOrientationForLandscapeMode;
+ (unsigned long long)defaultSupportOrientation;
+ (id)developmentNumber;
+ (id)newDeviceType;
+ (BOOL)shouldUseCanOpenURLMethod;
+ (id)deviceType;
+ (id)MACAddress;
@end
