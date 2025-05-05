@interface GEOTransitPath : PBCodable
@property (nonatomic) NSMutableArray legs;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
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
- (id)legs;
- (void)setLegs:;
- (void)clearLegs;
- (void)addLeg:;
- (unsigned long long)legsCount;
- (id)legAtIndex:;
+ (BOOL)isValid:;
+ (Class)legType;
@end
