@interface SAAlarmAlarmShow : AceObject
@property (nonatomic) NSArray alarmIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)alarmIds;
- (void)setAlarmIds:;
+ (id)alarmShow;
+ (id)alarmShowWithDictionary:context:;
@end
