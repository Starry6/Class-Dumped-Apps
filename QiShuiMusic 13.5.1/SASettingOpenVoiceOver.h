@interface SASettingOpenVoiceOver : SASettingOpenSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openVoiceOver;
+ (id)openVoiceOverWithDictionary:context:;
@end
