@interface AWESubChallengeTitleView : UICollectionReusableView
@property (nonatomic) YYLabel descriptionLabel;
@property (nonatomic) {CGSize=dd} containerSize;
@property (nonatomic) NSDictionary descriptionLabelattribute;
@property (nonatomic) NSDictionary detailLabelAttribute;
@property (nonatomic) AWESubChallengeModel model;
- (id)descriptionLabelattribute;
- (id)detailLabelAttribute;
- (void)setDescriptionLabelattribute:;
- (void)setDetailLabelAttribute:;
- (id)addToDetailLabelForText:isLightTheme:;
- (void)didTapDetailLabel;
- (void)configWithSubChallengeModel:isLightTheme:;
- (void)setModel:;
- (void)setDescriptionLabel:;
- (id)containerSize;
- (id)initWithFrame:;
- (void)setContainerSize:;
- (id)model;
- (void).cxx_destruct;
- (id)descriptionLabel;
+ (double)heightForHeaderOfText:containerWidth:;
@end
