@interface GEORPFeedbackComponent : PBCodable
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray values;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (void)setStatus:;
- (id)unknownFields;
- (BOOL)hasStatus;
- (id)valueAtIndex:;
- (id)initWithJSON:;
- (id)statusAsString:;
- (id)jsonRepresentation;
- (id)values;
- (int)StringAsType:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)clearValues;
- (void)copyTo:;
- (id)typeAsString:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (void)addValue:;
- (int)type;
- (unsigned long long)valuesCount;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (void)setValues:;
- (BOOL)isEqual:;
- (int)StringAsStatus:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
+ (Class)valueType;
@end
