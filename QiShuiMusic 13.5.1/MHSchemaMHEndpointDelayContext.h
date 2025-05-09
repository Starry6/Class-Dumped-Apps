@interface MHSchemaMHEndpointDelayContext : SISchemaInstrumentationMessage
@property (nonatomic) Q speakingStartInNs;
@property (nonatomic) BOOL hasSpeakingStartInNs;
@property (nonatomic) Q speakingEndInNs;
@property (nonatomic) BOOL hasSpeakingEndInNs;
@property (nonatomic) Q endpointDelayInNs;
@property (nonatomic) BOOL hasEndpointDelayInNs;
@property (nonatomic) Q endpointModelDelayInNs;
@property (nonatomic) BOOL hasEndpointModelDelayInNs;
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
- (void)setSpeakingStartInNs:;
- (BOOL)hasSpeakingStartInNs;
- (void)setHasSpeakingStartInNs:;
- (void)deleteSpeakingStartInNs;
- (void)setSpeakingEndInNs:;
- (BOOL)hasSpeakingEndInNs;
- (void)setHasSpeakingEndInNs:;
- (void)deleteSpeakingEndInNs;
- (void)setEndpointDelayInNs:;
- (BOOL)hasEndpointDelayInNs;
- (void)setHasEndpointDelayInNs:;
- (void)deleteEndpointDelayInNs;
- (void)setEndpointModelDelayInNs:;
- (BOOL)hasEndpointModelDelayInNs;
- (void)setHasEndpointModelDelayInNs:;
- (void)deleteEndpointModelDelayInNs;
- (unsigned long long)speakingStartInNs;
- (unsigned long long)speakingEndInNs;
- (unsigned long long)endpointDelayInNs;
- (unsigned long long)endpointModelDelayInNs;
@end
