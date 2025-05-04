@interface AWEPublishRemoteVideoHelper : NSObject
+ (BOOL)isRemoteVideoPublishDisabled;
+ (BOOL)hasRemoteVideo:;
+ (BOOL)isAvilableForPublishingRemoteVideo:;
+ (BOOL)shouldDisableSavingToLocal:;
+ (BOOL)isRemoteVideoReused:;
@end
