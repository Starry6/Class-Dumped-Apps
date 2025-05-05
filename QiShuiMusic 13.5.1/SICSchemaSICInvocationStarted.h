@interface SICSchemaSICInvocationStarted : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL hasIsMuted;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (BOOL)isMuted;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (void)setHasIsMuted:;
- (id)dictionaryRepresentation;
- (BOOL)hasIsMuted;
- (BOOL)isEqual:;
- (void)setIsMuted:;
- (void)deleteIsMuted;
@end
