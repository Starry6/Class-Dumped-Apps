@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell
@property (nonatomic) q contentAlignment;
- (void)applyStyle;
- (void)updateConstraints;
- (long long)contentAlignment;
- (void)setContentAlignment:;
- (double)minimumContentHeight;
- (void)loadContentViewConstraints;
- (double)contentViewBottomAnchorConstraintConstant;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (void)setupAccessoryImageViewInView:;
+ (id)reuseIdentifier;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:;
+ (id)desiredContentSizeForTitle:subTitle:navigationListStyle:;
@end
