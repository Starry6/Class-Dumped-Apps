@interface EXPSiriSchemaEXPClientExperimentTriggeredTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSArray allocations;
@property (nonatomic) SISchemaUUID codepathId;
@property (nonatomic) BOOL hasCodepathId;
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
- (id)allocations;
- (void)setAllocations:;
- (void)clearAllocation;
- (void)deleteAllocation;
- (void)addAllocation:;
- (unsigned long long)allocationCount;
- (id)allocationAtIndex:;
- (BOOL)hasCodepathId;
- (void)deleteCodepathId;
- (id)codepathId;
- (void)setCodepathId:;
- (void)setHasCodepathId:;
@end
