@interface PAPBLocationAccess : PBCodable
@property (nonatomic) BOOL hasAccess;
@property (nonatomic) PAPBAccess access;
- (id)access;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)mergeFrom:;
- (void)setAccess:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasAccess;
@end
