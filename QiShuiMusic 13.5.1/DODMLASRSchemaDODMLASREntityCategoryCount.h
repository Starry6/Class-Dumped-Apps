@interface DODMLASRSchemaDODMLASREntityCategoryCount : SISchemaInstrumentationMessage
@property (nonatomic) NSString entityCategory;
@property (nonatomic) BOOL hasEntityCategory;
@property (nonatomic) I count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) NSData jsonData;
- (void)setCount:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)deleteCount;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (unsigned int)count;
- (BOOL)isEqual:;
- (void)setHasCount:;
- (BOOL)hasCount;
- (BOOL)hasEntityCategory;
- (void)deleteEntityCategory;
- (id)entityCategory;
- (void)setEntityCategory:;
- (void)setHasEntityCategory:;
@end
