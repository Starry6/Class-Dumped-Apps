@interface AWEFeedRVCardVideoControlBaseController : AWEBaseController
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEFeedRVCardVideoControlContext context;
@property (nonatomic) AWEFeedRelatedVideoCardControlViewController container;
@property (nonatomic) AWEFeedRVCardVideoControlDispatcherManager dispatcherManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dispatcherManager;
- (void)onSelected;
- (void)unSelected;
- (void)setModel:;
- (void)play;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)model;
- (void)setData:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
