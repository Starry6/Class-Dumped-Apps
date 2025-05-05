@interface INFERENCESchemaINFERENCEBackgroundContactHandleSignalSet : SISchemaInstrumentationMessage
@property (nonatomic) float peopleSuggesterScore;
@property (nonatomic) BOOL hasPeopleSuggesterScore;
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
- (void)setPeopleSuggesterScore:;
- (BOOL)hasPeopleSuggesterScore;
- (void)setHasPeopleSuggesterScore:;
- (void)deletePeopleSuggesterScore;
- (float)peopleSuggesterScore;
@end
