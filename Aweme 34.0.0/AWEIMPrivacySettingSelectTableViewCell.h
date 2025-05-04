@interface AWEIMPrivacySettingSelectTableViewCell : AWEIMPrivacySettingBaseTableViewCell
@property (nonatomic) MASConstraint switchConstraint;
@property (nonatomic) MASConstraint selectConstraint;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UILabel selectTipLabel;
@property (nonatomic) DUXSettingSwitch switchBtn;
- (void)configWithModel:;
- (id)switchBtn;
- (void)setSwitchBtn:;
- (id)selectTipLabel;
- (void)p_updateTipLabelConstraint;
- (id)selectConstraint;
- (void)setSelectConstraint:;
- (id)switchConstraint;
- (void)setSwitchConstraint:;
- (void)updateHorizontalConstraint;
- (void)switchControlDidChanged:;
- (id)titleContentSize;
- (void)makeConstraintForRatio:containerWitdh:leftAttachment:rightAttachment:leftFancySubtitleWidth:;
- (double)titleContentWidth;
- (void)setSelectTipLabel:;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
@end
