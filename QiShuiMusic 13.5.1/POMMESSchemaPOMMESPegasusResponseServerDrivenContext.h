@interface POMMESSchemaPOMMESPegasusResponseServerDrivenContext : SISchemaInstrumentationMessage
@property (nonatomic) NSArray catIds;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearCatId;
- (void)deleteCatId;
- (void)addCatId:;
- (unsigned long long)catIdCount;
- (id)catIdAtIndex:;
- (id)catIds;
- (void)setCatIds:;
@end
