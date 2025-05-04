@interface AWEInterestDiscoverBottomBarController : NSObject
@property (nonatomic) AWEInterestDiscoverBottomBarContext context;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEInterestDiscoverBottomView bottomView;
@property (nonatomic) q currentIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)updateCurrentIndexPath:;
- (void)clickBottomView;
- (void)setCurrentIndex:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (long long)currentIndex;
- (id)bottomView;
- (void)setBottomView:;
- (Class)contextClass;
- (id)bottomBarView;
@end
