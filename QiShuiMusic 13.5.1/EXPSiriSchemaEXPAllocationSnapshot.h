@interface EXPSiriSchemaEXPAllocationSnapshot : SISchemaInstrumentationMessage
@property (nonatomic) NSArray allocations;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearAllocations;
- (void)deleteAllocations;
- (void)addAllocations:;
- (unsigned long long)allocationsCount;
- (id)allocationsAtIndex:;
- (id)allocations;
- (void)setAllocations:;
@end
