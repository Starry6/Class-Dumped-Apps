@interface IESECBaseShopTabViewController : UIViewController
@property (nonatomic) IESECDurationHelper stay;
- (void)setStay:;
- (id)stay;
- (void)trackStayWithEventName:duration:;
- (void)dealloc;
- (void)applicationDidEnterBackground:;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)applicationWillEnterForeground:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
