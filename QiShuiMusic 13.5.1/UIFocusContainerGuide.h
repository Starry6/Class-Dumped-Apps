@interface UIFocusContainerGuide : UIFocusGuide
- (id)init;
- (void)_searchForFocusRegionsInContext:;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (BOOL)_isEligibleForFocusInteraction;
@end
