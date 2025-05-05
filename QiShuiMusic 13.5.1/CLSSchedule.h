@interface CLSSchedule : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q scheduledEntityType;
@property (nonatomic) q scheduleAction;
@property (nonatomic) q scheduleUpdateStatus;
@property (nonatomic) NSDate scheduleDate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)mergeWithObject:;
- (id)scheduleDate;
- (void)setScheduleDate:;
- (id)initForObject:scheduleDate:;
- (long long)scheduledEntityType;
- (void)setScheduledEntityType:;
- (long long)scheduleAction;
- (void)setScheduleAction:;
- (long long)scheduleUpdateStatus;
- (void)setScheduleUpdateStatus:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
