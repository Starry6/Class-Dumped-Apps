@interface AWETemplateQingYanReplaceAudioViewModel : AWETemplateBaseViewModel
@property (nonatomic) BOOL isReplacingMusic;
@property (nonatomic) BOOL hadShowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)viewController_viewDidAppear;
- (void)viewDidTriggerAction:;
- (BOOL)isReplacingMusic;
- (void)setIsReplacingMusic:;
- (void)handleReplaceMusicStatusNotification:;
- (void)didInitialized;
- (void)setHadShowed:;
- (BOOL)hadShowed;
- (void)replaceAudio;
- (void)dealloc;
- (void)reset;
+ (id)settingsConfig;
+ (BOOL)shouldActiveWithData:scene:context:;
+ (BOOL)isFromHomepagePostWorkList:;
+ (BOOL)enableBarFromSettings;
+ (BOOL)hadReplacedItem:;
+ (BOOL)hasExceededMaxDisplayCountWithItemID:;
+ (void)recordDisplayCountWithItemID:;
+ (void)recordHadReplacedItem:;
@end
