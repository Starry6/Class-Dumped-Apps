@interface ICUserIdentityStoreCoding : NSObject
@property (nonatomic) q identityStoreStyle;
@property (nonatomic) q uniqueIdentifier;
@property (nonatomic) ICValueHistory activeAccountHistory;
@property (nonatomic) ICValueHistory activeLockerAccountHistory;
@property (nonatomic) <ICUserIdentityStoreBackend> backend;
@property (nonatomic) ICDelegateAccountStoreOptions delegateAccountStoreOptions;
- (void)setActiveAccountHistory:;
- (long long)identityStoreStyle;
- (id)activeLockerAccountHistory;
- (long long)uniqueIdentifier;
- (void)lock:;
- (id)_initCommon;
- (id)initWithCoder:;
- (void)setBackend:;
- (id)delegateAccountStoreOptions;
- (void)encodeWithCoder:;
- (id)initWithIdentityStoreStyle:;
- (void).cxx_destruct;
- (id)activeAccountHistory;
- (void)setActiveLockerAccountHistory:;
- (id)backend;
- (void)setDelegateAccountStoreOptions:;
+ (BOOL)supportsSecureCoding;
@end
