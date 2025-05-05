@interface EMFocusController : NSObject
- (id)init;
- (id)_currentFocusedAccountIdentifiers;
- (void)getCurrentFocus:;
- (void)_focusModeChanged;
- (void).cxx_destruct;
- (id)addObserver:currentFocus:;
+ (id)updatedPredicateForFocus:currentPredicate:usingAccountRepository:;
+ (id)predicateForFocus:usingAccountRepository:;
@end
