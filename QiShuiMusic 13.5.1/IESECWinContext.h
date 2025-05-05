@interface IESECWinContext : IESECContext
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) IESECWinMonitor monitor;
@property (nonatomic) UIViewController targetVC;
@property (nonatomic) IESECWinRouterData routerParams;
@property (nonatomic) IESECWinRouter router;
@property (nonatomic) BOOL isSecondaryPage;
@property (nonatomic) BOOL isLiveHeaderOptimize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSecondaryPage;
- (id)initWithParams:targetVC:;
- (BOOL)isLiveHeaderOptimize;
- (id)routerParams;
- (void)setIsLiveHeaderOptimize:;
- (void)setIsSecondaryPage:;
- (void)setRouterParams:;
- (void)setTargetVC:;
- (id)targetVC;
- (void)trackerAddBussinissParams:;
- (void)setTracker:;
- (id)tracker;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)router;
@end
