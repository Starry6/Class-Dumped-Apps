@interface VSAccountSaveOperation : VSAsyncOperation
@property (nonatomic) NSArray unsavedAccounts;
@property (nonatomic) VSPersistentStorage storage;
@property (nonatomic) VSAccountChannels unsavedChannels;
@property (nonatomic) VSOptional result;
@property (nonatomic) NSOperation currentOperation;
- (id)result;
- (void)executionDidBegin;
- (id)init;
- (void)cancel;
- (void)setStorage:;
- (id)storage;
- (id)currentOperation;
- (void).cxx_destruct;
- (void)setResult:;
- (void)setCurrentOperation:;
- (id)unsavedAccounts;
- (void)setUnsavedAccounts:;
- (id)initWithUnsavedAccounts:channels:storage:;
- (void)_startCredentialSaveOperation;
- (void)_startAccountChannelsSaveOperation;
- (id)unsavedChannels;
- (void)setUnsavedChannels:;
@end
