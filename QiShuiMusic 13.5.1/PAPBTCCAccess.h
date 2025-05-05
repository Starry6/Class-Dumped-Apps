@interface PAPBTCCAccess : PBCodable
@property (nonatomic) BOOL hasAccess;
@property (nonatomic) PAPBAccess access;
@property (nonatomic) BOOL hasTccService;
@property (nonatomic) NSString tccService;
- (id)access;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)tccService;
- (void)mergeFrom:;
- (void)setAccess:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasAccess;
- (BOOL)hasTccService;
- (void)setTccService:;
@end
