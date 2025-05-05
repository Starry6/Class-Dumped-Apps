@interface SISchemaEnrolledUserState : SISchemaInstrumentationMessage
@property (nonatomic) NSString siriLinkedSpeechID;
@property (nonatomic) BOOL hasSiriLinkedSpeechID;
@property (nonatomic) SISchemaPersonalization personalization;
@property (nonatomic) BOOL hasPersonalization;
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
- (id)personalization;
- (void)setPersonalization:;
- (BOOL)hasPersonalization;
- (void)deletePersonalization;
- (void)setHasPersonalization:;
- (BOOL)hasSiriLinkedSpeechID;
- (void)deleteSiriLinkedSpeechID;
- (id)siriLinkedSpeechID;
- (void)setSiriLinkedSpeechID:;
- (void)setHasSiriLinkedSpeechID:;
@end
