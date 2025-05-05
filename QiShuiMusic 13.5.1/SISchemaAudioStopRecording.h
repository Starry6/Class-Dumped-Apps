@interface SISchemaAudioStopRecording : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger endpointType;
@property (nonatomic) BOOL hasEndpointType;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (int)endpointType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setEndpointType:;
- (BOOL)hasEndpointType;
- (void)setHasEndpointType:;
- (void)deleteEndpointType;
@end
