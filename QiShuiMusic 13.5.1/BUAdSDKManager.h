@interface BUAdSDKManager : BUInterfaceBaseObject
@property (nonatomic) BUAdSDKManager iteration;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
+ (void)startWithSyncCompletionHandler:;
+ (Class)mediation;
+ (void)startWithAsyncCompletionHandler:;
+ (id)sharedInstance;
@end
