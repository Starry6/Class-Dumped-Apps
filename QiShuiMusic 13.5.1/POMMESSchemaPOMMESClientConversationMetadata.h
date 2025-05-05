@interface POMMESSchemaPOMMESClientConversationMetadata : SISchemaInstrumentationMessage
@property (nonatomic) BOOL hasPromptContext;
@property (nonatomic) BOOL hasHasPromptContext;
@property (nonatomic) BOOL hasDisplayHints;
@property (nonatomic) BOOL hasHasDisplayHints;
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
- (BOOL)hasDisplayHints;
- (void)setHasPromptContext:;
- (BOOL)hasHasPromptContext;
- (void)setHasHasPromptContext:;
- (void)deleteHasPromptContext;
- (void)setHasDisplayHints:;
- (BOOL)hasHasDisplayHints;
- (void)setHasHasDisplayHints:;
- (void)deleteHasDisplayHints;
- (BOOL)hasPromptContext;
@end
