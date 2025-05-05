@interface DNDModeConfigurationScheduleTrigger : DNDModeConfigurationTrigger
@property (nonatomic) DNDScheduleTimePeriod timePeriod;
@property (nonatomic) NSDate creationDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)creationDate;
- (BOOL)isEnabled;
- (id)initWithTimePeriod:enabledSetting:;
- (id)initWithTimePeriod:creationDate:enabledSetting:;
- (id)timePeriod;
+ (BOOL)supportsSecureCoding;
+ (id)defaultScheduleTrigger;
+ (id)triggerWithClientTrigger:creationDate:;
@end
