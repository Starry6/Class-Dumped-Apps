@interface AWEPlayInteractionLLMBottomBtn : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) @? clickAction;
- (id)clickAction;
- (void)setClickAction:;
- (void)updateInnerLayout;
- (void)setLabel:;
- (id)init;
- (id)iconView;
- (id)label;
- (void)setIconView:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setTitle:;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setupUI;
- (void)tapped:;
+ (double)buttonWidthWithIcon:title:;
+ (id)titleLabelFont;
@end
