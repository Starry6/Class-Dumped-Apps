@interface BSRelativeDateTimer : NSObject
@property (nonatomic) <BSRelativeDateTimerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)date;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDate:;
- (void)invalidate;
- (void)powerMonitorSystemDidWakeFromSleep:;
- (void)_fireForLocaleEvent:;
- (void)_fireAndUpdateTimerIfNecessary;
- (double)nextFireInterval;
- (id)nextFireAfterDate:;
- (void)fireAndSchedule;
@end
