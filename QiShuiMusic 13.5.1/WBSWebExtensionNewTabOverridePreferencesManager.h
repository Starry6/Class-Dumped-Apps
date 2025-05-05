@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject
+ (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:;
+ (id)sortedComposedIdentifiersForExtensionsWithOverridePages;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:inDefaults:;
+ (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:;
+ (void)clearNewTabBehaviorInDefaults:fromUserGesture:;
+ (void)clearNewTabBehaviorInDefaults:;
+ (id)cloudExtensionStateForDefaults:;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:inDefaults:fromUserGesture:;
@end
