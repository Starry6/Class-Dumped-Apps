@interface IESLiveInteractiveMediaPermissionProviderImpl : NSObject
@property (nonatomic) IESLiveMediaPermissionManager manager;
@property (nonatomic) NSMutableSet ignoreViewControllers;
@property (nonatomic) NSMutableSet videoCaptureStartIgnoreViewControllers;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (BOOL)enableAudienceMediaCaptureOpt;
- (id)ignoreViewControllers;
- (void)interruptMediaSession;
- (BOOL)isIgnoreTopViewController;
- (BOOL)isVideoCaptureStartIgnoreViewController;
- (BOOL)isVideoInterrupt;
- (void)releaseMonitor;
- (void)resumeMediaSession;
- (void)setIgnoreViewControllers:;
- (void)setIsViewAppearing:;
- (void)setVideoCaptureStartIgnoreViewControllers:;
- (void)startInteract;
- (id)videoCaptureStartIgnoreViewControllers;
- (id)manager;
- (void)setManager:;
- (void).cxx_destruct;
- (void)registerMonitor:;
- (BOOL)isViewAppearing;
@end
