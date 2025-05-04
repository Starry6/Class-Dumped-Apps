@interface AWELxPayModalViewController : UIViewController
@property (nonatomic) UIView contentView;
@property (nonatomic) BDPUniqueID uniqueID;
- (id)initWithUniqueID:contentView:;
- (id)uniqueID;
- (void)viewDidLoad;
- (id)contentView;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
@end
