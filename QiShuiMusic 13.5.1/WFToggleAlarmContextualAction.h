@interface WFToggleAlarmContextualAction : WFContextualAction
@property (nonatomic) NSString alarmIdentifier;
@property (nonatomic) NSString alarmName;
@property (nonatomic) Q operation;
- (unsigned long long)operation;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)alarmName;
- (BOOL)isEqual:;
- (id)alarmIdentifier;
- (BOOL)showsUserInterfaceWhenRunning;
- (id)initWithAlarmIdentifier:alarmName:operation:;
+ (BOOL)supportsSecureCoding;
@end
