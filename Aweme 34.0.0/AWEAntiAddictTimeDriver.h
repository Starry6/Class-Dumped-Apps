@interface AWEAntiAddictTimeDriver : NSObject
@property (nonatomic) AWEAntiAddictTimeCounter timeCounter;
@property (nonatomic) NSDate lastActiveDate;
@property (nonatomic) NSDate lastResignDate;
@property (nonatomic) <AWEAntiAddictCounterProtocol> counter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCounter:activeDate:;
- (void)updateDataToDate:;
- (void)loginStateChangedAtDate:;
- (void)appDidBecomeActiveAtDate:;
- (void)appWillResignActiveAtDate:;
- (void)appWillTerminateAtDate:;
- (void)updateCounterWithStartDate:andEndDate:;
- (id)timeCounter;
- (void)setLastActiveDate:;
- (void)setLastResignDate:;
- (id)lastResignDate;
- (void)setTimeCounter:;
- (id)counter;
- (void).cxx_destruct;
- (id)lastActiveDate;
+ (Class)counterClass;
+ (id)createCounterInstance;
+ (id)moduleName;
@end
