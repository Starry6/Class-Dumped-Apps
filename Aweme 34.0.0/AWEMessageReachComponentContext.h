@interface AWEMessageReachComponentContext : NSObject
@property (nonatomic) AWEMessageReachParamContext paramContext;
@property (nonatomic) AWEMessageReachParamContext lastParamContext;
@property (nonatomic) AWEMessageReachComponentModel needDowngradedComponentModel;
@property (nonatomic) AWEMessageReachComponentModel showingComponentModel;
@property (nonatomic) AWEMessageReachComponentModel prepareShowComponentModel;
@property (nonatomic) @? pendingShowCompleteBlock;
- (id)paramContext;
- (id)showingComponentModel;
- (void)setParamContext:;
- (id)lastParamContext;
- (void)setLastParamContext:;
- (id)prepareShowComponentModel;
- (void)setPendingShowCompleteBlock:;
- (void)setShowingComponentModel:;
- (void)setNeedDowngradedComponentModel:;
- (id)needDowngradedComponentModel;
- (void)setPrepareShowComponentModel:;
- (id)pendingShowCompleteBlock;
- (void).cxx_destruct;
@end
