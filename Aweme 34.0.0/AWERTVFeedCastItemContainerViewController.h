@interface AWERTVFeedCastItemContainerViewController : UIViewController
@property (nonatomic) UIViewController itemViewController;
@property (nonatomic) UIView navigationBar;
@property (nonatomic) NSString navigationTitle;
@property (nonatomic) <RTVVoipResourceFetcherInterface> resourceFetcher;
@property (nonatomic) <RxInjector> injector;
- (void)rxAwakeFromPropertyInjection;
- (id)resourceFetcher;
- (id)aAWEPadRTVAdapter;
- (id)initWithItemViewController:;
- (void)configNavigationTitle:;
- (void)__handleBackEvent:;
- (id)navigationBar;
- (void)setNavigationTitle:;
- (void)viewDidLoad;
- (id)navigationTitle;
- (id)injector;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)setNavigationBar:;
- (id)itemViewController;
+ (Class)aAWEPadRTVAdapterClass;
@end
