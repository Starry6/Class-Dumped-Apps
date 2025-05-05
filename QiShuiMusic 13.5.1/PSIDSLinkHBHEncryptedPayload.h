@interface PSIDSLinkHBHEncryptedPayload : PBCodable
@property (nonatomic) NSData initializationVector;
@property (nonatomic) NSData cipherText;
@property (nonatomic) NSData authenticationTag;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initializationVector;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setInitializationVector:;
- (id)cipherText;
- (void)setCipherText:;
- (id)authenticationTag;
- (void)setAuthenticationTag:;
@end
