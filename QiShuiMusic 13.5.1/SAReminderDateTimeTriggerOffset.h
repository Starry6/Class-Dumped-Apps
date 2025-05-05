@interface SAReminderDateTimeTriggerOffset : AceObject
@property (nonatomic) NSString offsetTimeUnit;
@property (nonatomic) NSNumber offsetValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)offsetTimeUnit;
- (void)setOffsetTimeUnit:;
- (id)offsetValue;
- (void)setOffsetValue:;
+ (id)dateTimeTriggerOffset;
+ (id)dateTimeTriggerOffsetWithDictionary:context:;
@end
