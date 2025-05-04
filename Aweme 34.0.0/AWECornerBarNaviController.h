@interface AWECornerBarNaviController : UINavigationController
@property (nonatomic) BOOL isEliteVersion;
- (BOOL)isEliteVersion;
- (void)setIsEliteVersion:;
- (id)initWithNibName:bundle:isEliteVersion:;
- (void)buildShapeLayer;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
@end
