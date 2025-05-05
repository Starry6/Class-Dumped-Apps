@interface LRSchemaLRRedactionSummaryReported : SISchemaInstrumentationMessage
@property (nonatomic) BOOL hasRedactedEvents;
@property (nonatomic) BOOL hasHasRedactedEvents;
@property (nonatomic) NSArray redactionWindows;
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
- (void)setRedactionWindows:;
- (void)setHasRedactedEvents:;
- (BOOL)hasHasRedactedEvents;
- (void)setHasHasRedactedEvents:;
- (void)deleteHasRedactedEvents;
- (void)clearRedactionWindows;
- (void)deleteRedactionWindows;
- (void)addRedactionWindows:;
- (unsigned long long)redactionWindowsCount;
- (id)redactionWindowsAtIndex:;
- (BOOL)hasRedactedEvents;
- (id)redactionWindows;
@end
