@interface SECSFAActionAutomaticBugCapture : PBCodable
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) NSString domain;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL hasSubtype;
@property (nonatomic) NSString subtype;
- (id)subtype;
- (BOOL)hasSubtype;
- (void)setType:;
- (void)writeTo:;
- (void)setSubtype:;
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
