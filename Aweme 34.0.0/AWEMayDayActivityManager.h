@interface AWEMayDayActivityManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:error:from:;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)teenModeDidChange:isLogout:;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
