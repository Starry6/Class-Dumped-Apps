@interface AWERecycledWorksDetailBottomBarController : NSObject
@property (nonatomic) AWERecycledWorksDetailBottomView bottomView;
@property (nonatomic) AWERecycledWorksDetailBottomBarContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)bottomBarAddedToContainer:;
- (void)didClickRecoverButton;
- (void)didClickDeleteButton;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)bottomView;
- (void)setBottomView:;
- (Class)contextClass;
- (id)bottomBarView;
@end
