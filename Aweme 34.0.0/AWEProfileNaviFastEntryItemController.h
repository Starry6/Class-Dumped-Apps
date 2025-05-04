@interface AWEProfileNaviFastEntryItemController : NSObject
@property (nonatomic) AWETeenModeFastEntryButton fastEntryButton;
@property (nonatomic) <AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (id)profileContext;
- (id)fastEntryButton;
- (void)setFastEntryButton:;
- (void)fastEntryButtonTapped:;
- (id)navigationItemView;
- (void)handleComplianceSettingFinishedNotification:;
- (void)handleFastEntryChangedNotification:;
- (void)refreshButtonWithIconOnly;
- (BOOL)needFitMiniScreen;
- (void)enterTeenMode;
- (id)delegate;
- (void)viewDidLoad;
- (void)applicationWillEnterForeground:;
- (long long)type;
- (void)setType:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)itemSize;
@end
