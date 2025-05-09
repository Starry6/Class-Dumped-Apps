@interface GEOLPRDefinedPlateType : PBCodable
@property (nonatomic) NSMutableArray conditions;
@property (nonatomic) BOOL hasDesc;
@property (nonatomic) NSString desc;
- (BOOL)hasDefinedPlateConditionsForVehicle:error:;
- (void)readAll:;
- (id)conditions;
- (id)init;
- (BOOL)hasDesc;
- (id)initWithJSON:;
- (id)desc;
- (id)jsonRepresentation;
- (unsigned long long)conditionsCount;
- (id)initWithDictionary:;
- (void)setDesc:;
- (void)writeTo:;
- (void)setConditions:;
- (void)clearConditions;
- (id)conditionsAtIndex:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void)addConditions:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
+ (Class)conditionsType;
@end
