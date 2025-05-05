@interface SSUpdateAccountResponse : NSObject
@property (nonatomic) Q credentialSource;
@property (nonatomic) SSAccount updatedAccount;
- (void).cxx_destruct;
- (unsigned long long)credentialSource;
- (id)initWithUpdatedAccount:credentialSource:;
- (id)updatedAccount;
@end
