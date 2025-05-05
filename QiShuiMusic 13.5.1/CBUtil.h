@interface CBUtil : NSObject
+ (BOOL)isAppleVID:forVIDSrc:;
+ (BOOL)isWatchOS;
+ (BOOL)isDeviceSupportedOnWatchOSWithType:VIDsrc:VID:PID:;
+ (BOOL)isDeviceSupportedWithType:VIDsrc:VID:PID:;
+ (long long)preSSPStringToPairingCode:;
+ (id)preSSPPairingCodeToString:;
@end
