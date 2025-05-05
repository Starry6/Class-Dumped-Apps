@interface AASignInOperationHelper : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)signInAccount:enablingDataclasses:completion:;
- (void)_saveAccount:completion:;
- (void)_refreshEnabledDataclassesForAccount:;
@end
