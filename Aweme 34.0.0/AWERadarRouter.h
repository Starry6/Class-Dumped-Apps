@interface AWERadarRouter : NSObject
+ (BOOL)hasOpenRadar;
+ (void)customTransitionWithInfo:description:needUploadLoaction:;
+ (void)setHasOpenRadar:;
+ (void)openRadarIfAvailable:;
+ (void)customTransitionWithInfo:description:needUploadLoaction:transToRadarMainVC:;
+ (void)openRadarIfAvailable:enterMethod:;
+ (BOOL)willNotTransfer;
+ (void)transToViewController:needUploadLoaction:;
+ (void)transToViewController:needUploadLoaction:needPresent:;
+ (void)changeToPortraitIfNeededWithCompletion:;
+ (BOOL)isTopVCShouldDismiss;
+ (void)customTransitionToShakeShareAwemeWithInfo:;
@end
