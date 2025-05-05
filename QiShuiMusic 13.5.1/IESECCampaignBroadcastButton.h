@interface IESECCampaignBroadcastButton : IESECButton
@property (nonatomic) IESECContentEdgeInsetLabel leftLabel;
@property (nonatomic) CAShapeLayer dashline;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double textPadding;
@property (nonatomic) q textFont;
- (void)setTextPadding:;
- (id)dashline;
- (double)defaultButtonHeight;
- (id)defaultEdgeInsets;
- (void)setDashline:;
- (void)setLeftLabelWithText:;
- (void)setRightLabelWithText:;
- (double)textPadding;
- (void)updateButtonSizeAndEdgeInsetsWithText:;
- (double)defaultTextPadding;
- (void)layoutSubviews;
- (double)buttonHeight;
- (long long)textFont;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)leftLabel;
- (void)setTextFont:;
- (void)setButtonHeight:;
- (void)setLeftLabel:;
- (long long)defaultTextFont;
@end
