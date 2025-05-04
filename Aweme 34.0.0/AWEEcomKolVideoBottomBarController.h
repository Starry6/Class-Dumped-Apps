@interface AWEEcomKolVideoBottomBarController : NSObject
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) AWEEcomKolVideoBottomBarView bottomView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)p_updateContext;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)bottomView;
- (void)setBottomView:;
- (Class)contextClass;
- (id)bottomBarView;
@end
