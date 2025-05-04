@interface AWEIMSafeRemideActionSheetStyleView : AWEIMSafeRemindView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) YYLabel bodyLabel;
@property (nonatomic) UIView topView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView bottomBackgroundView;
- (BOOL)configWithModel:;
- (id)bottomBackgroundView;
- (void)setBottomBackgroundView:;
- (void)p_configUI;
- (void)setLabel:withAttributedText:preferredMaxLayoutWidth:;
- (double)textHeightWithPreferredMaxLayoutWidth:AttributedText:;
- (id)p_createButtonWithButtonModel:configModel:;
- (void)p_configButton:;
- (id)stackView;
- (void)setCancelButton:;
- (void)setStackView:;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)backgroundView;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)topView;
- (id)bodyLabel;
- (void)setBodyLabel:;
- (void)setTopView:;
@end
