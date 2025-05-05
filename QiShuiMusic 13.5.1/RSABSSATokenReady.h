@interface RSABSSATokenReady : NSObject
@property (nonatomic) NSData tokenContent;
@property (nonatomic) NSData keyId;
@property (nonatomic) NSData signature;
- (id)signature;
- (void).cxx_destruct;
- (id)keyId;
- (id)tokenContent;
- (id)initWithTokenContent:tokenSignature:keyId:;
@end
