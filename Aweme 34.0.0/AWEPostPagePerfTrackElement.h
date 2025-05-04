@interface AWEPostPagePerfTrackElement : AWEPostPageElement
@property (nonatomic) ACCSessionServiceContainer sessionContainer;
@property (nonatomic) BOOL didAppearFlag;
- (void)contextDidReady;
- (void)trackOfDraftClickEndAndDisplay;
- (BOOL)didAppearFlag;
- (void)setDidAppearFlag:;
- (void)p_trackPublishPageFirstAppear;
- (void)_trackOfDraftClickEndAndDisplay:;
- (id)sessionContainer;
- (void)setSessionContainer:;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (long long)priority;
- (void)viewWillAppear:;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (BOOL)isEnabled;
+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:;
+ (id)type;
@end
