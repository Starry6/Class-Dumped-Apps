@interface IMDeviceUtilities : NSObject
+ (BOOL)deviceIsLockedDown;
+ (BOOL)supportsSpotlight;
+ (BOOL)IMDeviceIsChinaRegion;
+ (BOOL)supportsBusinessChat;
+ (BOOL)supportsDataDetectors;
+ (BOOL)IMDeviceIsIndiaRegion;
+ (BOOL)supportsNameAndPhoto;
+ (BOOL)supportsScreenEffects;
+ (BOOL)supportsFocus;
+ (BOOL)supportsSharedWithYou;
+ (BOOL)IMDeviceIsGreenTea;
+ (BOOL)IMSupportsASTC;
+ (BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+ (BOOL)supportsFaceTime;
@end
