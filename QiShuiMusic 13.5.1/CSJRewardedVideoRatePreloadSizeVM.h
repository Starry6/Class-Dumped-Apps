@interface CSJRewardedVideoRatePreloadSizeVM : NSObject
@property (nonatomic) BUPolicyCenter policy;
@property (nonatomic) BOOL envReady;
- (BOOL)envReady;
- (id)initWithCompleteBlock:;
- (void)setEnvReady:;
- (void)startRateWithData:completeBlock:;
- (void)setPolicy:;
- (id)policy;
- (void).cxx_destruct;
@end
