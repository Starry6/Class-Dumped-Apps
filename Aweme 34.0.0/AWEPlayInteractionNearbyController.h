@interface AWEPlayInteractionNearbyController : AWEPlayInteractionBaseController
@property (nonatomic) BOOL freqCtrMgrHasInit;
@property (nonatomic) <AWENearbyLynxWidgetProtocol> feedWidget;
@property (nonatomic) NSString widgetSchema;
- (void)setWidgetSchema:;
- (id)widgetSchema;
- (id)feedWidget;
- (void)setFeedWidget:;
- (BOOL)freqCtrMgrHasInit;
- (void)setFreqCtrMgrHasInit:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)viewWillDisappear;
@end
