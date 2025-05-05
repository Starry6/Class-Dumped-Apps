@interface NWPBAgentClass : PBCodable
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) NSString domain;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSString type;
- (void)setType:;
- (void)writeTo:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)type;
- (void).cxx_destruct;
- (BOOL)hasDomain;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (void)setDomain:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
