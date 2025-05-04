@interface AWESearchAIGCExpandPanelElement : UIView
@property (nonatomic) UIButton button;
@property (nonatomic) UILabel label;
@property (nonatomic) NSString text;
@property (nonatomic) UIImage image;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)clickButton:;
- (id)initWithText:image:clickBlock:;
- (void)setLabel:;
- (id)init;
- (id)image;
- (void)setImage:;
- (void)setText:;
- (void)setButton:;
- (id)text;
- (id)label;
- (void).cxx_destruct;
- (id)button;
- (void)setupUI;
+ (id)albumElementWithClickBlock:;
+ (id)cameraElementWithClickBlock:;
@end
