@interface BUAdSDKInternalModel : BUInterfaceBaseObject
@property (nonatomic) BUAdSDKInternalModel iteration;
@property (nonatomic) BULiveAdCustomConfig liveAdConfig;
- (id)init;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
+ (id)sharedInstance;
@end
