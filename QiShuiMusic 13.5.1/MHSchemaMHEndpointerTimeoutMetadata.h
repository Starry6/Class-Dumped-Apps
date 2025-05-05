@interface MHSchemaMHEndpointerTimeoutMetadata : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isTimeout;
@property (nonatomic) BOOL hasIsTimeout;
@property (nonatomic) Q timeoutThresholdInNs;
@property (nonatomic) BOOL hasTimeoutThresholdInNs;
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
- (void)setIsTimeout:;
- (BOOL)hasIsTimeout;
- (void)setHasIsTimeout:;
- (void)deleteIsTimeout;
- (void)setTimeoutThresholdInNs:;
- (BOOL)hasTimeoutThresholdInNs;
- (void)setHasTimeoutThresholdInNs:;
- (void)deleteTimeoutThresholdInNs;
- (BOOL)isTimeout;
- (unsigned long long)timeoutThresholdInNs;
@end
