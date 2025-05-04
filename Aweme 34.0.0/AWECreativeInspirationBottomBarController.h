@interface AWECreativeInspirationBottomBarController : NSObject
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) UIView<AWECreativeInspirationBottomBarViewInterface> bottomView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)bottomBarAddedToContainer:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)bottomView;
- (void)setBottomView:;
- (Class)contextClass;
- (id)bottomBarView;
@end
