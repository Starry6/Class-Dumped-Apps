@interface SSAuthenticateResponse : NSObject
@property (nonatomic) SSAccount authenticatedAccount;
@property (nonatomic) q authenticateResponseType;
@property (nonatomic) Q credentialSource;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)responseDictionary;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)description;
- (void)setResponseDictionary:;
- (void)_setError:;
- (unsigned long long)credentialSource;
- (void)setCredentialSource:;
- (id)authenticatedAccount;
- (void)setAuthenticatedAccount:;
- (long long)authenticateResponseType;
- (void)setAuthenticateResponseType:;
@end
