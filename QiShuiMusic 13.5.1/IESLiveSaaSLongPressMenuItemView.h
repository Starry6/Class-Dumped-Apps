@interface IESLiveSaaSLongPressMenuItemView : UIControl
@property (nonatomic) UIView lineView;
@property (nonatomic) IESLiveSaaSLongPressMenuItem item;
- (id)createItemImageView;
- (void)setHasSeparatorLine:;
- (id)item;
- (id)intrinsicContentSize;
- (id)initWithMenuItem:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
@end
