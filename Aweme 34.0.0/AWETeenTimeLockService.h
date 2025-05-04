@interface AWETeenTimeLockService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)todayTimeLockLimit;
- (unsigned long long)weekendTimeLockLimit;
- (unsigned long long)weekdayTimeLockLimit;
@end
