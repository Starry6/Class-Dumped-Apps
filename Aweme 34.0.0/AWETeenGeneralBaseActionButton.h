@interface AWETeenGeneralBaseActionButton : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) UIImageView actionBtnImage;
@property (nonatomic) UILabel actionLabel;
- (void)p_setupUI;
- (void)setExtra:;
- (void)setActionBtnImage:;
- (id)actionBtnImage;
- (void)btnClick;
- (void)configWithModel:extra:;
- (void)setModel:;
- (id)init;
- (id)extra;
- (id)model;
- (void).cxx_destruct;
- (id)actionLabel;
- (void)setActionLabel:;
@end
