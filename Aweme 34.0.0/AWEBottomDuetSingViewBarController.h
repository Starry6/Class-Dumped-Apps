@interface AWEBottomDuetSingViewBarController : NSObject
@property (nonatomic) UIView bottomBarView;
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) AWEAnimatedButton actionButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)clickedActionButton;
- (void)setBottomBarView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)actionButton;
- (void)setActionButton:;
- (Class)contextClass;
- (id)bottomBarView;
@end
