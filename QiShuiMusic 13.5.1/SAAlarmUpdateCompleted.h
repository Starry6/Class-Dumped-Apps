@interface SAAlarmUpdateCompleted : SABaseCommand
@property (nonatomic) NSURL alarmId;
@property (nonatomic) NSArray alarmIds;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)alarmId;
- (id)encodedClassName;
- (void)setAlarmId:;
- (id)alarmIds;
- (void)setAlarmIds:;
+ (id)updateCompleted;
+ (id)updateCompletedWithDictionary:context:;
@end
