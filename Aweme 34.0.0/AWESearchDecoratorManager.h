@interface AWESearchDecoratorManager : NSObject
@property (nonatomic) AWESearchDecoratorContainerContext containerContext;
@property (nonatomic) NSObject<AWESearchDecoratorBusinessProtocol> currentBusiness;
@property (nonatomic) NSMutableDictionary currentModules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onContainerDidAppear;
- (void)onContainerDidDisappear;
- (void)onContainerResponseFinishRefresh;
- (void)onContainerResponseWillRefresh;
- (void)didFinishSearchTopicPublishWithTaskForOuterFlow:;
- (void)beginSearchDecoratorPublishWithTaskForOuterFlow:;
- (void)startCommentWithCommentContext:;
- (void)clearCurrentBusiness;
- (void)setCurrentBusiness:;
- (id)currentBusiness;
- (void)setCurrentModules:;
- (id)currentModules;
- (void)bindInnerFlowDecoratorFuncs:;
- (void)startPublishWithShotContext:;
- (void).cxx_destruct;
- (id)containerContext;
- (void)setContainerContext:;
- (void)updateWithContext:;
@end
