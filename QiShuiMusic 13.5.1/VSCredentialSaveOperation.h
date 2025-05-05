@interface VSCredentialSaveOperation : VSAsyncOperation
@property (nonatomic) NSArray unsavedAccounts;
@property (nonatomic) VSAccountStore accountStore;
@property (nonatomic) VSOptional result;
- (id)result;
- (void)setAccountStore:;
- (void)executionDidBegin;
- (id)init;
- (id)accountStore;
- (void).cxx_destruct;
- (void)setResult:;
- (id)initWithUnsavedAccounts:accountStore:;
- (void)_didSaveAccounts:withResult:error:;
- (id)unsavedAccounts;
- (void)setUnsavedAccounts:;
@end
