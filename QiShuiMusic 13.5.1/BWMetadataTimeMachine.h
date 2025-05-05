@interface BWMetadataTimeMachine : NSObject
@property (nonatomic) {?=qiIq} earliestAllowedPTS;
- (void)dealloc;
- (id)earliestAllowedPTS;
- (void)setEarliestAllowedPTS:;
- (void)reset;
- (void)addMetadata:;
- (id)initWithCapacity:metadataHandlingPriority:flushHandler:;
- (void)addDroppedFrameForPortType:pts:;
- (id)metadataForPTSRange:timeout:;
- (BOOL)waitUntilCapacity:timeout:;
@end
