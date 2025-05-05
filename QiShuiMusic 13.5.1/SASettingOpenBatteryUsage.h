@interface SASettingOpenBatteryUsage : SASettingOpenSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openBatteryUsage;
+ (id)openBatteryUsageWithDictionary:context:;
@end
