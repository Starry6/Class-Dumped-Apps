@interface AWEPublishPaymentNetworkManager : NSObject
+ (void)fetchVIPVideoInfo:;
+ (void)fetchPaymentEntranceInfoWithVideoType:completion:;
+ (void)fetchPaymentConfigInfo:;
+ (void)checkMusicCanUseInPaymentVideo:completion:;
@end
