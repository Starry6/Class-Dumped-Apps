@interface SISchemaLinkedAccessoryState : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID accessoryId;
@property (nonatomic) BOOL hasAccessoryId;
@property (nonatomic) NSArray gradingOptInStateChanges;
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
- (id)accessoryId;
- (void)setAccessoryId:;
- (void)clearGradingOptInStateChanges;
- (void)deleteGradingOptInStateChanges;
- (void)addGradingOptInStateChanges:;
- (unsigned long long)gradingOptInStateChangesCount;
- (id)gradingOptInStateChangesAtIndex:;
- (id)gradingOptInStateChanges;
- (void)setGradingOptInStateChanges:;
- (BOOL)hasAccessoryId;
- (void)deleteAccessoryId;
- (void)setHasAccessoryId:;
@end
