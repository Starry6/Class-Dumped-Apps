@interface AWENearbyHotSpotBottomBarController : NSObject
@property (nonatomic) AWENearbyHotSpotBottomView bottomView;
@property (nonatomic) AWENearbyHotSpotBottomBarContext context;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (id)aweme;
- (void)setAweme:;
- (BOOL)canShowBottomBarForAweme:;
- (void)bottomBarAddedToContainer:;
- (BOOL)shouldUpdateUI:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)bottomView;
- (void)setBottomView:;
- (Class)contextClass;
- (id)bottomBarView;
@end
