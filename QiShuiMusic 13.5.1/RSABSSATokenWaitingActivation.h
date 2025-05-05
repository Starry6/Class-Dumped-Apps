@interface RSABSSATokenWaitingActivation : NSObject
@property (nonatomic) NSData blindingInverse;
@property (nonatomic) RSABSSATokenBlinder tokenBlinder;
@property (nonatomic) NSData tokenContent;
@property (nonatomic) NSData blindedMessage;
- (void).cxx_destruct;
- (id)blindedMessage;
- (id)activateTokenWithServerResponse:error:;
- (id)tokenContent;
- (id)initWithBlindingInverse:blindedMessage:tokenContent:tokenBlinder:ciphersuite:;
- (id)blindingInverse;
- (id)tokenBlinder;
@end
