@interface MUIKit.STAlertController : UIAlertController
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
- (void)btnTouchUpInside:;
- (void)addAction:;
- (void)setMessage:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)addTextFieldWithConfigurationHandler:;
@end
