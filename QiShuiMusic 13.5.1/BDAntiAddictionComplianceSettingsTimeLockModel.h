@interface BDAntiAddictionComplianceSettingsTimeLockModel : NSObject
@property (nonatomic) q weekdayTimeLockLimit;
@property (nonatomic) q weekendTimeLockLimit;
@property (nonatomic) q recordInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)recordInterval;
- (void)setRecordInterval:;
- (void)setWeekdayTimeLockLimit:;
- (void)setWeekendTimeLockLimit:;
- (long long)weekdayTimeLockLimit;
- (long long)weekendTimeLockLimit;
+ (id)modelCustomPropertyMapper;
@end
