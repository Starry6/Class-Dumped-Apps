@interface SASettingOpenPreference : SASettingOpenSettings
@property (nonatomic) NSString pane;
@property (nonatomic) NSString tag;
- (id)tag;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTag:;
- (id)encodedClassName;
- (void)setPane:;
- (id)pane;
+ (id)openPreference;
+ (id)openPreferenceWithDictionary:context:;
@end
