@interface SAReminderCompositeTrigger : SAReminderTrigger
@property (nonatomic) SAReminderDateTimeTrigger dateTimeTrigger;
@property (nonatomic) SAReminderLocationTrigger locationTrigger;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)dateTimeTrigger;
- (id)locationTrigger;
- (void)setDateTimeTrigger:;
- (void)setLocationTrigger:;
+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:context:;
@end
