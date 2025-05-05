@interface SISchemaUEIDictationDiscoveryToolTipDismissed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger dismissalReason;
@property (nonatomic) BOOL hasDismissalReason;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setDismissalReason:;
- (int)dismissalReason;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasDismissalReason;
- (void)setHasDismissalReason:;
- (void)deleteDismissalReason;
@end
