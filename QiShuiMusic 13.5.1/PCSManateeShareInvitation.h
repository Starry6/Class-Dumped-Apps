@interface PCSManateeShareInvitation : PBCodable
@property (nonatomic) BOOL hasExportedPCSData;
@property (nonatomic) NSData exportedPCSData;
@property (nonatomic) BOOL hasShareePublicKeyData;
@property (nonatomic) NSData shareePublicKeyData;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasExportedPCSData;
- (BOOL)hasShareePublicKeyData;
- (id)exportedPCSData;
- (void)setExportedPCSData:;
- (id)shareePublicKeyData;
- (void)setShareePublicKeyData:;
@end
