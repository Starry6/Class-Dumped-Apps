@interface CLPInstSchemaCLPCDMReplayTaskEnded : SISchemaInstrumentationMessage
@property (nonatomic) I replayedSampleCount;
@property (nonatomic) BOOL hasReplayedSampleCount;
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
- (void)setReplayedSampleCount:;
- (BOOL)hasReplayedSampleCount;
- (void)setHasReplayedSampleCount:;
- (void)deleteReplayedSampleCount;
- (unsigned int)replayedSampleCount;
@end
