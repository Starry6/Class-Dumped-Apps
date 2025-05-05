@interface AWEIMChatDetailSettingCell : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView rightArrowView;
@property (nonatomic) @? actionBlock;
- (void)clickAction;
- (id)initSwitchCellWithText:tabActionBlock:;
- (id)initWithText:tabActionBlock:;
- (void)setRightArrowView:;
- (id)actionBlock;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)rightArrowView;
- (void)setActionBlock:;
@end
