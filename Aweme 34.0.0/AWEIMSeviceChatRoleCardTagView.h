@interface AWEIMSeviceChatRoleCardTagView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UILabel label;
- (void)onTapView:;
- (double)cacuelateWidthForItem:;
- (double)caculateWidthForText:font:;
- (void)setLabel:;
- (id)init;
- (id)stackView;
- (void)setStackView:;
- (void)setItems:;
- (id)label;
- (void).cxx_destruct;
@end
