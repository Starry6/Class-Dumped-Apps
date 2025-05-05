@interface SASettingOpenVoiceControl : SASettingOpenSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)openVoiceControl;
+ (id)openVoiceControlWithDictionary:context:;
@end
