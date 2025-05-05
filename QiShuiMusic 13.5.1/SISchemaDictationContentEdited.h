@interface SISchemaDictationContentEdited : SISchemaInstrumentationMessage
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) NSArray autoPunctuationEdits;
@property (nonatomic) NSData jsonData;
- (BOOL)hasExists;
- (BOOL)exists;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setExists:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteExists;
- (void)setHasExists:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setAutoPunctuationEdits:;
- (void)clearAutoPunctuationEdits;
- (void)deleteAutoPunctuationEdits;
- (void)addAutoPunctuationEdits:;
- (unsigned long long)autoPunctuationEditsCount;
- (id)autoPunctuationEditsAtIndex:;
- (id)autoPunctuationEdits;
@end
