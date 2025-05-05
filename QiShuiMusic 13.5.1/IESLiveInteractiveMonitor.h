@interface IESLiveInteractiveMonitor : NSObject
@property (nonatomic) NSDictionary inputParams;
@property (nonatomic) NSMutableSet observerSet;
@property (nonatomic) NSInteger preAudioSessionRouteType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setObserverSet:;
- (id)detectHeadsetPluggedIn;
- (void)didSetAttachingDIContext;
- (void)endInteractiveWithScene:;
- (void)linkerEnterWithExtParams:;
- (void)mediaFirstFrameWithExtParams:;
- (void)observeNotifications;
- (int)preAudioSessionRouteType;
- (void)setPreAudioSessionRouteType:;
- (void)startInteractiveWithScene:;
- (void)trackAudioSessionRoute;
- (void)dealloc;
- (BOOL)isAnchor;
- (id)observerSet;
- (void).cxx_destruct;
- (id)inputParams;
- (void)setInputParams:;
@end
