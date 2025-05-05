@interface SISchemaUEIDictationDiscoveryToolTipShown : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger toolTipShown;
@property (nonatomic) BOOL hasToolTipShown;
@property (nonatomic) BOOL hasEmoji;
@property (nonatomic) BOOL hasHasEmoji;
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
- (void)setToolTipShown:;
- (BOOL)hasToolTipShown;
- (void)setHasToolTipShown:;
- (void)deleteToolTipShown;
- (void)setHasEmoji:;
- (BOOL)hasHasEmoji;
- (void)setHasHasEmoji:;
- (void)deleteHasEmoji;
- (int)toolTipShown;
- (BOOL)hasEmoji;
@end
