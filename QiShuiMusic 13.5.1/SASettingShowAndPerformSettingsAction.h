@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand
@property (nonatomic) <SASettingSettingsAction> settingsAction;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)settingsAction;
- (void)setSettingsAction:;
+ (id)showAndPerformSettingsAction;
+ (id)showAndPerformSettingsActionWithDictionary:context:;
@end
