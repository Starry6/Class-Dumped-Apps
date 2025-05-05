@interface SWSystemSleepMonitorProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)registerForSystemPowerOnQueue:withDelegate:;
- (void)allowPowerChange:;
- (void)cancelPowerChange:;
@end
