@interface AWESilentPushTaskManager : NSObject
@property (nonatomic) BOOL hasEnterForeground;
@property (nonatomic) BOOL hasOpenApp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)executeTasks:;
- (id)p_silentPushConfig;
- (void)p_trackReceiveSilentPush;
- (BOOL)p_enable;
- (BOOL)hasEnterForeground;
- (BOOL)hasOpenApp;
- (BOOL)p_enableForceExit;
- (long long)p_forceExitDelayTime;
- (void)p_uploadEvent;
- (void)setHasEnterForeground:;
- (void)setHasOpenApp:;
+ (id)sharedInstance;
@end
