@interface SAAlarmCreate : SADomainCommand
@property (nonatomic) SAAlarmObject alarmToCreate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)alarmToCreate;
- (void)setAlarmToCreate:;
+ (id)create;
+ (id)createWithDictionary:context:;
@end
