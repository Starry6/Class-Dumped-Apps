@interface AWEIMMessageRiskTipsView : UIView
@property (nonatomic) <AWEIMMessageRiskModelProtocol> model;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) AWEIMLinkTextUtility linkTextUtility;
- (void)p_setupUI;
- (void)configWithModel:;
- (void)p_addTapGes;
- (id)tapGes;
- (void)setTapGes:;
- (void)p_tapAction;
- (void)setLinkTextUtility:;
- (id)linkTextUtility;
- (id)p_attributedStringWithText:textColor:textFont:firstLineHeadIndent:;
- (void)setModel:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)model;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setIconImageView:;
- (void)p_updateFrame;
@end
