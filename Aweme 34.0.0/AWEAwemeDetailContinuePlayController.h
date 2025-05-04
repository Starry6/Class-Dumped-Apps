@interface AWEAwemeDetailContinuePlayController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL didEnterOthersPage;
@property (nonatomic) BOOL enableContinuePlayWhenNotBeginPlay;
@property (nonatomic) BOOL didEnterPinchPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:model:;
- (BOOL)shouldOptimizeContinuePlayWithModel:seekTime:;
- (BOOL)enableContinuePlayWhenNotBeginPlay;
- (BOOL)enableContinuePlay;
- (BOOL)shouldUpdateProgress;
- (void)setDidEnterOthersPage:;
- (void)setDidEnterPinchPage:;
- (double)seekTimeLimitedVal;
- (BOOL)didEnterOthersPage;
- (BOOL)didEnterPinchPage;
- (BOOL)shouldPlayletNeedUpdateProgress:;
- (void)trackVideoRelayPlayWithModel:relayType:relayTime:;
- (void)setEnableContinuePlayWhenNotBeginPlay:;
- (id)init;
- (void)viewDidAppear:;
- (void)viewDidDisappear;
@end
