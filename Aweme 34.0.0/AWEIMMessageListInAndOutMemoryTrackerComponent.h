@interface AWEIMMessageListInAndOutMemoryTrackerComponent : AWEIMComponentBase
@property (nonatomic) double appMemoryBeforeVCInit;
@property (nonatomic) double appMemoryComponentInit;
@property (nonatomic) double appMemoryOnVCDisplay;
@property (nonatomic) NSDictionary bulletTrackInfo;
@property (nonatomic) NSDictionary serviceChatTrackInfo;
@property (nonatomic) BOOL isFloatOnEnter;
@property (nonatomic) <AWEIMMessageListBulletTrackerInterface> bulletTrackerService;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)bulletTrackInfo;
- (void)setAppMemoryComponentInit:;
- (void)setAppMemoryBeforeVCInit:;
- (void)setIsFloatOnEnter:;
- (void)setServiceChatTrackInfo:;
- (void)setBulletTrackerService:;
- (void)p_track;
- (double)appMemoryOnVCDisplay;
- (void)setAppMemoryOnVCDisplay:;
- (id)bulletTrackerService;
- (void)setBulletTrackInfo:;
- (double)appMemoryBeforeVCInit;
- (double)appMemoryComponentInit;
- (BOOL)isFloatOnEnter;
- (id)serviceChatTrackInfo;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
