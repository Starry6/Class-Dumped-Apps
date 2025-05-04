@interface AWEIAARewardNetworkManager : NSObject
+ (id)commonParams:;
+ (id)configHostURL:;
+ (void)getRewardConfigInfosWithModel:extraInfo:completion:;
+ (void)openRewardContainerReport:extraInfo:completion:;
+ (void)unlockRewardWithModel:extraInfo:completion:;
+ (void)unlockRewardWithModel:retryCount:extraInfo:completion:;
@end
