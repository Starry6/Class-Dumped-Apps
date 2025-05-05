@interface IESIMSaaSAWECornerBarNaviController : UINavigationController
@property (nonatomic) BOOL isEliteVersion;
- (void)buildShapeLayer;
- (id)initWithNibName:bundle:isEliteVersion:;
- (BOOL)isEliteVersion;
- (void)setIsEliteVersion:;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
