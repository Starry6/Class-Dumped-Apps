@interface CLPInstSchemaCLPCDMReplaySampleStarted : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) I utteranceRepetitionsInCalendarWeek;
@property (nonatomic) BOOL hasUtteranceRepetitionsInCalendarWeek;
@property (nonatomic) BOOL wasHabitualUserDuringCalendarWeek;
@property (nonatomic) BOOL hasWasHabitualUserDuringCalendarWeek;
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
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (BOOL)hasResultCandidateId;
- (void)deleteResultCandidateId;
- (void)setHasResultCandidateId:;
- (BOOL)hasOriginalRequestId;
- (void)deleteOriginalRequestId;
- (void)setUtteranceRepetitionsInCalendarWeek:;
- (BOOL)hasUtteranceRepetitionsInCalendarWeek;
- (void)setHasUtteranceRepetitionsInCalendarWeek:;
- (void)deleteUtteranceRepetitionsInCalendarWeek;
- (void)setWasHabitualUserDuringCalendarWeek:;
- (BOOL)hasWasHabitualUserDuringCalendarWeek;
- (void)setHasWasHabitualUserDuringCalendarWeek:;
- (void)deleteWasHabitualUserDuringCalendarWeek;
- (id)originalRequestId;
- (void)setOriginalRequestId:;
- (unsigned int)utteranceRepetitionsInCalendarWeek;
- (BOOL)wasHabitualUserDuringCalendarWeek;
- (void)setHasOriginalRequestId:;
@end
