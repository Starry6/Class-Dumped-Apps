@interface AWEPOIEXP3ButtonView : UIView
@property (nonatomic) double viewNeedWidth;
@property (nonatomic) NSString title;
@property (nonatomic) AWEPOIEXP3ButtonViewStyle style;
@property (nonatomic) UIButton actionButton;
- (void)p_setupUI;
- (void)configWithButtonTitle:;
- (double)viewNeedWidth;
- (id)initWithFrame:;
- (id)style;
- (void).cxx_destruct;
- (id)title;
- (void)setStyle:;
- (id)actionButton;
- (void)setActionButton:;
@end
