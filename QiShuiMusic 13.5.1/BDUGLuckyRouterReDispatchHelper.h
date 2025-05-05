@interface BDUGLuckyRouterReDispatchHelper : NSObject
@property (nonatomic) BOOL hasSDKStartup;
@property (nonatomic) BOOL hasUpdateSettings;
@property (nonatomic) NSMutableArray notHandledURLContextArray;
@property (nonatomic) NSObject<OS_dispatch_queue> reDispatchQueue;
- (id)reDispatchQueue;
- (id)__renewCompletionForContext:;
- (void)__trackerHandleContext:reason:;
- (void)addNotHandledRouterContext:;
- (BOOL)hasSDKStartup;
- (BOOL)hasUpdateSettings;
- (id)notHandledURLContextArray;
- (void)setHasSDKStartup:;
- (void)setHasUpdateSettings:;
- (void)setNotHandledURLContextArray:;
- (void)setReDispatchQueue:;
- (id)init;
- (void).cxx_destruct;
+ (void)__tryReDispatch;
+ (BOOL)__isAppSettingsHasValue;
+ (void)appSettingsUpdate;
+ (void)sdkDidStartup;
+ (id)sharedInstance;
@end
