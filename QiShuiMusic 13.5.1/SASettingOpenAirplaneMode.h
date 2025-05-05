@interface SASettingOpenAirplaneMode : SASettingOpenSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openAirplaneMode;
+ (id)openAirplaneModeWithDictionary:context:;
@end
