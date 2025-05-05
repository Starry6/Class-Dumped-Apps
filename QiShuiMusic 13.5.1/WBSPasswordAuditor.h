@interface WBSPasswordAuditor : NSObject
@property (nonatomic) WBSSavedAccountStore savedAccountStore;
@property (nonatomic) WBSAutoFillQuirksManager autoFillQuirksManager;
@property (nonatomic) BOOL accountStoreHasDuplicatedPasswords;
- (id)init;
- (void).cxx_destruct;
- (id)autoFillQuirksManager;
- (id)savedAccountStore;
- (id)duplicatePasswordsInPasswords:;
- (id)initWithSavedAccountStore:autoFillQuirksManager:;
- (BOOL)_savedAccountQualifiesForReuseAuditing:;
- (BOOL)_passwordIsReused:byOtherSavedAccount:;
- (BOOL)accountStoreHasDuplicatedPasswords;
- (BOOL)savedAccountIsReused:;
- (id)savedAccountsWithDuplicatedPassword:;
@end
