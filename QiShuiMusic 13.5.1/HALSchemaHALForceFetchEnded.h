@interface HALSchemaHALForceFetchEnded : SISchemaInstrumentationMessage
@property (nonatomic) I numDeviceContextsFetched;
@property (nonatomic) BOOL hasNumDeviceContextsFetched;
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
- (void)setNumDeviceContextsFetched:;
- (BOOL)hasNumDeviceContextsFetched;
- (void)setHasNumDeviceContextsFetched:;
- (void)deleteNumDeviceContextsFetched;
- (unsigned int)numDeviceContextsFetched;
@end
