@interface ACAccountStoreClientSideListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accountDidChange:withChangeType:;
- (void)connectionWasInvalidated;
- (void)accountCredentialsDidChangeForAccountWithIdentifier:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
