@interface WBSPasswordBreachPeriodicLookupActivity : NSObject
- (id)init;
- (void)_registerActivity;
- (void)_activityDidTransitionToRunState:;
- (void)_runActivityWithCompletionHandler:;
@end
