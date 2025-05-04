@interface AWESearchPOISubTextComponentCell : AWESearchPOIDefaultComponentCell
@property (nonatomic) UILabel subTextLabel;
- (void)configWithComponentModel:filterManager:;
- (void)configDisplayUIForDefaultStyleWithModel:;
- (void)configDisplayUIForSelectedStyleWithModel:;
- (void)configDisplayUIForSelectingStyleWithModel:;
- (void)setSubTextLabel:;
- (double)textLabelLeftSpacing;
- (double)textLabelRightSpacing;
- (double)verticalSpacingBetweenTextAndSubText;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)subTextLabel;
+ (id)identifier;
@end
