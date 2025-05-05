@interface SISchemaAudioStopRecordingStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger stopReasonMajor;
@property (nonatomic) BOOL hasStopReasonMajor;
@property (nonatomic) NSInteger stopReasonMinor;
@property (nonatomic) BOOL hasStopReasonMinor;
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
- (void)setStopReasonMajor:;
- (BOOL)hasStopReasonMajor;
- (void)setHasStopReasonMajor:;
- (void)deleteStopReasonMajor;
- (void)setStopReasonMinor:;
- (BOOL)hasStopReasonMinor;
- (void)setHasStopReasonMinor:;
- (void)deleteStopReasonMinor;
- (int)stopReasonMajor;
- (int)stopReasonMinor;
@end
