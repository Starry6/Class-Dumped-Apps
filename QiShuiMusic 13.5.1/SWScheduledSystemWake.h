@interface SWScheduledSystemWake : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q leeway;
@property (nonatomic) BOOL scheduled;
@property (nonatomic) double wakeTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)identifier;
- (BOOL)isScheduled;
- (void).cxx_destruct;
- (id)description;
- (long long)leeway;
- (id)initWithIdentifier:;
- (void)invalidate;
- (double)wakeTime;
- (void)scheduleWake:leeway:;
- (void)cancelWake;
@end
