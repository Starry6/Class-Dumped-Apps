@interface AWEAwemeOfflineBottomBarController : NSObject
@property (nonatomic) AWEAwemeOfflineBottomView bottomBarView;
@property (nonatomic) AWEAwemeOfflineBottomBarContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)setBottomBarView:;
- (void)onSettingButtonActionWithType:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;
@end
