@interface AWEIMExchangeCameraShareView : UIView
@property (nonatomic) AWEButton button;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) @? actionBlock;
- (void)p_setup;
- (void)setLabel:;
- (id)initWithFrame:;
- (void)setButton:;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)button;
- (id)arrowView;
- (void)setArrowView:;
- (void)setActionBlock:;
- (id)actionBlock;
- (void)updateWithTitle:;
- (void)tapAction;
@end
