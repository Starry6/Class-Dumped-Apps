@interface AWEDetailSchemeButton : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel label;
@property (nonatomic) @? tapAction;
- (void)configTapAction:;
- (void)__tap;
- (void)configWithIcon:title:config:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)iconView;
- (id)label;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
