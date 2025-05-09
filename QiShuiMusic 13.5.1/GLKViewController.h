@interface GLKViewController : UIViewController
@property (nonatomic) UIScreen screen;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) BOOL displayLinkPaused;
@property (nonatomic) GLKDisplayLinkMessenger displayLinkMessenger;
@property (nonatomic) BOOL viewIsVisible;
@property (nonatomic) BOOL firstResumeOccurred;
@property (nonatomic) double timeSinceFirstResumeStartTime;
@property (nonatomic) BOOL lastResumeOccurred;
@property (nonatomic) double timeSinceLastResumeStartTime;
@property (nonatomic) BOOL lastUpdateOccurred;
@property (nonatomic) double timeSinceLastUpdatePreviousTime;
@property (nonatomic) BOOL lastDrawOccurred;
@property (nonatomic) double timeSinceLastDrawPreviousTime;
@property (nonatomic) ^? updateIMP;
@property (nonatomic) q screenFramesPerSecond;
@property (nonatomic) <GLKViewControllerDelegate> delegate;
@property (nonatomic) q preferredFramesPerSecond;
@property (nonatomic) q framesPerSecond;
@property (nonatomic) BOOL paused;
@property (nonatomic) q framesDisplayed;
@property (nonatomic) double timeSinceFirstResume;
@property (nonatomic) double timeSinceLastResume;
@property (nonatomic) double timeSinceLastUpdate;
@property (nonatomic) double timeSinceLastDraw;
@property (nonatomic) BOOL pauseOnWillResignActive;
@property (nonatomic) BOOL resumeOnDidBecomeActive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayLink;
- (void)setDisplayLink:;
- (id)init;
- (void)dealloc;
- (void)viewDidMoveToWindow:shouldAppearOrDisappear:;
- (void)setPreferredFramesPerSecond:;
- (void)setDelegate:;
- (void)_createDisplayLinkForScreen:;
- (long long)preferredFramesPerSecond;
- (void)_initCommon;
- (id)initWithCoder:;
- (void)setViewIsVisible:;
- (BOOL)isPaused;
- (id)screen;
- (void)setPaused:;
- (void)encodeWithCoder:;
- (void)viewWillDisappear:;
- (id)delegate;
- (void)setScreen:;
- (BOOL)viewIsVisible;
- (void)viewWillAppear:;
- (void)loadView;
- (void)setView:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (long long)framesPerSecond;
- (void)viewDidUnload;
- (void)glkView:drawInRect:;
- (double)timeSinceLastUpdate;
- (void)_updateAndDraw;
- (void)_updateScreenIfChanged;
- (void)_pauseByNotification;
- (void)_resumeByNotification;
- (void)_configureNotifications;
- (long long)_calculateScreenFramesPerSecond:;
- (double)timeSinceFirstResume;
- (double)timeSinceLastResume;
- (void)setPauseOnWillResignActive:;
- (BOOL)pauseOnWillResignActive;
- (void)setResumeOnDidBecomeActive:;
- (BOOL)resumeOnDidBecomeActive;
- (BOOL)displayLinkPaused;
- (void)setDisplayLinkPaused:;
- (id)displayLinkMessenger;
- (void)setDisplayLinkMessenger:;
- (BOOL)firstResumeOccurred;
- (void)setFirstResumeOccurred:;
- (double)timeSinceFirstResumeStartTime;
- (void)setTimeSinceFirstResumeStartTime:;
- (BOOL)lastResumeOccurred;
- (void)setLastResumeOccurred:;
- (double)timeSinceLastResumeStartTime;
- (void)setTimeSinceLastResumeStartTime:;
- (BOOL)lastUpdateOccurred;
- (void)setLastUpdateOccurred:;
- (double)timeSinceLastUpdatePreviousTime;
- (void)setTimeSinceLastUpdatePreviousTime:;
- (BOOL)lastDrawOccurred;
- (void)setLastDrawOccurred:;
- (double)timeSinceLastDrawPreviousTime;
- (void)setTimeSinceLastDrawPreviousTime:;
- (id)updateIMP;
- (void)setUpdateIMP:;
- (long long)screenFramesPerSecond;
- (void)setScreenFramesPerSecond:;
- (long long)framesDisplayed;
- (double)timeSinceLastDraw;
@end
