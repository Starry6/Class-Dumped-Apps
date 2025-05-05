@interface SKPaymentAppleIDAuthorizationRequest : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString teamIdentifier;
@property (nonatomic) NSString serviceIdentifier;
- (void)setServiceIdentifier:;
- (id)teamIdentifier;
- (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)initWithClientIdentifier:teamIdentifier:;
- (id)copyWithZone:;
@end
