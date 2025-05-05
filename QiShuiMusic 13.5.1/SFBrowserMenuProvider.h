@interface SFBrowserMenuProvider : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_enabledExtensionsDidChange;
- (void)setMenusForSafariWithBuilder:;
- (void)setMenusIfNecessaryForSafariViewServiceWithBuilder:;
- (void)rebuildMenuIfNeededForPersona:;
- (void)_setMenusIfNecessaryForPersona:;
- (void)_setMenusForPersona:withBuilder:;
- (id)_switchToTabCommands;
- (id)_commandWithPriorityOverTextEditingForCommand:;
- (BOOL)commandConflictsWithTextEditing:;
- (id)_placeholderCommandWithAction:input:modifierFlags:discoverabilityTitle:;
- (id)_commandWithAction:input:modifierFlags:webInterceptable:property:;
- (id)_commandWithAction:input:modifierFlags:discoverabilityTitle:webInterceptable:;
- (id)_commandWithAction:input:modifierFlags:discoverabilityTitle:webInterceptable:alternates:;
- (id)_commandWithAction:input:modifierFlags:discoverabilityTitle:webInterceptable:property:alternates:;
- (id)_extensionsMenu;
+ (id)sharedProvider;
@end
