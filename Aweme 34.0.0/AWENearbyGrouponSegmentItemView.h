@interface AWENearbyGrouponSegmentItemView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWENearbyGrouponTabModel tabModel;
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) UIView clickAreaView;
@property (nonatomic) BOOL uniformDistribution;
@property (nonatomic) BOOL isStable;
@property (nonatomic) BOOL imageDidLoad;
@property (nonatomic) UIView redDotView;
@property (nonatomic) @? tapHandler;
@property (nonatomic) BOOL isRecommendTab;
- (id)redDotView;
- (void)setRedDotView:;
- (BOOL)isRecommendTab;
- (id)tabModel;
- (void)setTabModel:;
- (double)largeModeSizeWithFont:;
- (id)clickAreaView;
- (BOOL)uniformDistribution;
- (void)setUpRedDot;
- (void)removeDot;
- (void)setImageDidLoad:;
- (id)initWithIsUniformDistribution:isStable:tabModel:;
- (void)setIsRecommendTab:;
- (void)setClickAreaView:;
- (void)setUniformDistribution:;
- (void)setIsStable:;
- (BOOL)imageDidLoad;
- (id)titleImageView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)isStable;
- (void)setupUI;
- (void)setTapHandler:;
- (id)tapHandler;
- (void)handleTap;
- (void)setTitleImageView:;
- (void)updateTitle:;
- (void)updateUI:;
@end
