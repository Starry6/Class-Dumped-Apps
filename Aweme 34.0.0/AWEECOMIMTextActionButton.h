@interface AWEECOMIMTextActionButton : UIButton
@property (nonatomic) AWEECOMIMTextActionButtonModel model;
- (void)bindItemModel:;
- (void)setModel:;
- (id)intrinsicContentSize;
- (id)model;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (id)actionButtonWithButtonModel:;
@end
