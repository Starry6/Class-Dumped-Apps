@interface BSTimer : NSObject
@property (nonatomic) double repeatInterval;
@property (nonatomic) Q fireCount;
@property (nonatomic) BOOL scheduled;
@property (nonatomic) double startTime;
@property (nonatomic) double fireInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (double)fireInterval;
- (double)repeatInterval;
- (BOOL)isScheduled;
- (double)startTime;
- (void)schedule;
- (void).cxx_destruct;
- (id)initWithFireInterval:queue:handler:;
- (id)initWithFireInterval:repeatInterval:leewayInterval:queue:handler:;
- (unsigned long long)fireCount;
+ (id)scheduledTimerWithFireInterval:queue:handler:;
@end
