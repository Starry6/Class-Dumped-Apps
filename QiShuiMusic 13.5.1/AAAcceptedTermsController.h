@interface AAAcceptedTermsController : NSObject
- (void)fetchTermsAcceptanceForAccount:completion:;
- (void)saveTermsAcceptance:forAccount:;
- (void)_repairTermsBackup:forAccount:;
@end
