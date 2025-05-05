@interface UIFocusDebugger : NSObject
+ (id)status;
+ (id)help;
+ (id)_verboseStatus;
+ (id)_statusForFocusSystem:scene:includeSceneLog:includeDeferralTarget:;
+ (id)_legacy_checkFocusabilityForView:;
+ (id)checkFocusabilityForItem:;
+ (id)simulateFocusUpdateRequestFromEnvironment:;
+ (id)_ancestryForEnvironment:;
+ (id)checkFocusGroupTreeForEnvironment:;
+ (id)focusGroupsForEnvironment:;
+ (id)preferredFocusEnvironmentsForEnvironment:;
@end
