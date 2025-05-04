@interface AWEAdInteractiveLandingpageManager : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) UIViewController containerVC;
@property (nonatomic) AWEAdInteractiveLandingpageRifleView interactiveCardView;
@property (nonatomic) BOOL isFromHomepage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)setContainerVC:;
- (void)setupContainerWithContainerVC:model:isFromHomepage:;
- (void)showInteractiveCard;
- (id)containerVC;
- (void)rifleView:didLoadFailedWithURL:error:;
- (void)setIsFromHomepage:;
- (void)loadCardView;
- (void)layoutCardViewWithContainerView:;
- (void)setInteractiveCardView:;
- (id)interactiveCardView;
- (BOOL)isFromHomepage;
- (void)hideInteractiveCard;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)shouldShowInteractiveLandingpageCardWithModel:;
+ (id)adComponentWithAdModel:;
+ (BOOL)hasInteractiveDataWithComponent:;
@end
