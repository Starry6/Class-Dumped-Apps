@interface AWEIMFansTitleContainer : AWEIMFansBaseContainer
@property (nonatomic) AWEIMFansInsetsLabel relationTagLabel;
@property (nonatomic) MASConstraint nameLabelTrailingConstraint;
@property (nonatomic) MASConstraint relationTagLeadingConstraint;
@property (nonatomic) AWEAliasEditLabel nameLabel;
- (void)configWithViewModel:;
- (id)relationTagLabel;
- (void)setRelationTagLabel:;
- (id)accessibilityActions;
- (void)relationLabelTapped;
- (void)setNameLabelTrailingConstraint:;
- (void)setRelationTagLeadingConstraint:;
- (id)nameLabelTrailingConstraint;
- (id)relationTagLeadingConstraint;
- (void)updateViewsLayout:;
- (void)updateEditAliasStatus:;
- (void)updateNameLabelText;
- (void)resetNameLabelEditable;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupViews;
+ (double)topPaddingForLines;
@end
