@interface IESECTabElementWrapperViewController : UIViewController
@property (nonatomic) @? appearanceTransitionBlock;
@property (nonatomic) <IESECTabViewElementProtocol> mObject;
- (id)appearanceTransitionBlock;
- (id)initWithWrapperObject:;
- (void)setAppearanceTransitionBlock:;
- (void)setMObject:;
- (void)tabIndexCancelMoveToMe;
- (void)tabIndexDidMoveToMe;
- (void)tabIndexWillMoveToMe;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)mObject;
@end
