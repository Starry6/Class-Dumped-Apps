@interface AWEAdSearchSimilarRecommendationTopView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWEAdTagView titleTagLabel;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithAweme:;
- (void)configureUI;
- (id)titleTagLabel;
- (void)setTitleTagLabel:;
- (void)setupLayouts;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)bottomLine;
- (void)setBottomLine:;
@end
