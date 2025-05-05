@interface PLUSSchemaPLUSContactSuggesterRequestMetadataReported : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isPlusContactSuggesterEnabled;
@property (nonatomic) BOOL hasIsPlusContactSuggesterEnabled;
@property (nonatomic) BOOL isForcePromptUsed;
@property (nonatomic) BOOL hasIsForcePromptUsed;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setIsPlusContactSuggesterEnabled:;
- (BOOL)hasIsPlusContactSuggesterEnabled;
- (void)setHasIsPlusContactSuggesterEnabled:;
- (void)deleteIsPlusContactSuggesterEnabled;
- (BOOL)isPlusContactSuggesterEnabled;
- (void)setIsForcePromptUsed:;
- (BOOL)hasIsForcePromptUsed;
- (void)setHasIsForcePromptUsed:;
- (void)deleteIsForcePromptUsed;
- (BOOL)isForcePromptUsed;
@end
