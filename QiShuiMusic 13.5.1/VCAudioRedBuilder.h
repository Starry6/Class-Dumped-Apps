@interface VCAudioRedBuilder : NSObject
@property (nonatomic) I numPayloads;
@property (nonatomic) I maxDelay;
@property (nonatomic) NSInteger redPayloadType;
- (void)dealloc;
- (void)setMaxDelay:;
- (unsigned int)maxDelay;
- (id)buildRedPayloadWithPrimaryPayload:redPayloads:;
- (unsigned int)timestampOffsetForBlocks:;
- (BOOL)isPayloadTimestampWithinThreshold:forTimestamp:;
- (char *)resetOutputPayload:;
- (id)nearestRedPayloadForTimestamp:;
- (id)selectRedPayloadsForPrimaryPayload:;
- (BOOL)redundantPayloads:containsPointer:;
- (id)redPayloadDescription:;
- (id)redundantPayloadsDescription:;
- (id)payloadHistoryDescription;
- (id)redPayloadForPrimaryPayload:;
- (void)updatePayloadHistory:;
- (id)initWithRedPayloadType:sampleRate:samplesPerFrame:numPayloads:maxDelay:includeSequenceOffset:;
- (id)getPrimaryPayloadWithBuffer:length:payloadType:timestamp:priority:;
- (unsigned int)numPayloads;
- (void)setNumPayloads:;
- (int)redPayloadType;
+ (unsigned int)redOverheadForNumPayloads:;
@end
