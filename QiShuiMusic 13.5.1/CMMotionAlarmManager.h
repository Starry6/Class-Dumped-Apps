@interface CMMotionAlarmManager : NSObject
@property (nonatomic) <CMMotionAlarmDelegateProtocol> delegate;
@property (nonatomic) NSString name;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)initWithName:;
- (id)delegate;
- (id)name;
- (BOOL)unregisterAlarmWithName:error:;
- (BOOL)registerAlarmWithName:type:duration:repeats:error:;
- (BOOL)acknowledgeAlarmWithName:error:;
- (BOOL)launchRemoteAppWithError:;
- (BOOL)unregisterAlarm:error:;
- (BOOL)acknowledgeAlarm:error:;
+ (id)defaultManager;
@end
