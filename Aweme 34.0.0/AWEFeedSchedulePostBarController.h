@interface AWEFeedSchedulePostBarController : NSObject
@property (nonatomic) <AWEFeedViewedViewBarContextProtocol> context;
@property (nonatomic) AWEFeedSchedulePostBarView bottomBarView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)setBottomBarView:;
- (void)trackBarShow:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;
@end
