@interface ORCHSchemaORCHConversationContextSubmitted : SISchemaInstrumentationMessage
@property (nonatomic) BOOL contextUpdateReceived;
@property (nonatomic) BOOL hasContextUpdateReceived;
@property (nonatomic) BOOL contextUpdateError;
@property (nonatomic) BOOL hasContextUpdateError;
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
- (void)setContextUpdateReceived:;
- (BOOL)hasContextUpdateReceived;
- (void)setHasContextUpdateReceived:;
- (void)deleteContextUpdateReceived;
- (void)setContextUpdateError:;
- (BOOL)hasContextUpdateError;
- (void)setHasContextUpdateError:;
- (void)deleteContextUpdateError;
- (BOOL)contextUpdateReceived;
- (BOOL)contextUpdateError;
@end
