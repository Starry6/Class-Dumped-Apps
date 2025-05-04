@interface AWEAdCommentSheetViewController : AWEAdCommentBaseViewController
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)initWithAweme:;
- (id)commentViewController;
- (void)setCommentViewController:;
- (void)configViews;
- (void)onAWEUIThemeChangeNotification;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)showOnViewController:awemeModel:;
@end
