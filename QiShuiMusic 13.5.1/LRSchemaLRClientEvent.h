@interface LRSchemaLRClientEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) LRSchemaLRRedactionSummaryReported redactionSummaryReported;
@property (nonatomic) BOOL hasRedactionSummaryReported;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichEvent_Type;
- (id)qualifiedMessageName;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned long long)whichEvent_Type;
- (void)setRedactionSummaryReported:;
- (id)redactionSummaryReported;
- (id)innerEvent;
- (void)deleteRedactionSummaryReported;
- (BOOL)hasRedactionSummaryReported;
- (void)setHasRedactionSummaryReported:;
+ (int)joinability;
@end
