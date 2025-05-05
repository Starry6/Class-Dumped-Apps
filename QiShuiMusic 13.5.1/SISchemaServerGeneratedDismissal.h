@interface SISchemaServerGeneratedDismissal : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger serverGeneratedDismissalReason;
@property (nonatomic) BOOL hasServerGeneratedDismissalReason;
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
- (void)setServerGeneratedDismissalReason:;
- (BOOL)hasServerGeneratedDismissalReason;
- (void)setHasServerGeneratedDismissalReason:;
- (void)deleteServerGeneratedDismissalReason;
- (int)serverGeneratedDismissalReason;
@end
