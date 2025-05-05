@interface NWAWDNWPrivacyProxyNetwork : PBCodable
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSInteger status;
- (void)setStatus:;
- (BOOL)hasStatus;
- (id)statusAsString:;
- (int)StringAsType:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (int)type;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)StringAsStatus:;
- (id)copyWithZone:;
@end
