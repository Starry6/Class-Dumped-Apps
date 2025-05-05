@interface FigCaptureDisplayLayoutMonitor : NSObject
@property (nonatomic) q displayType;
@property (nonatomic) BOOL onHomeScreen;
@property (nonatomic) BOOL onLockScreen;
- (void)removeLayoutObserver:;
- (void)dealloc;
- (BOOL)isOnHomeScreen;
- (long long)displayType;
- (id)debugDescription;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:displayType:;
- (void)externalDisplayWillDisconnect:;
- (void)addLayoutObserver:;
- (void)externalDisplayDidConnect:;
- (id)description;
- (BOOL)isOnLockScreen;
+ (id)sharedExternalDisplayLayoutMonitor;
+ (id)sharedDisplayLayoutMonitor;
@end
