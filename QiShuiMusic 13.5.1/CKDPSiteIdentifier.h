@interface CKDPSiteIdentifier : PBCodable
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) NSData identifier;
@property (nonatomic) BOOL hasModifier;
@property (nonatomic) NSData modifier;
- (id)modifier;
- (id)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasIdentifier;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setModifier:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasModifier;
@end
