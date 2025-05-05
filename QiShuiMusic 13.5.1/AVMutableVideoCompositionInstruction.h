@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) ^{CGColor=} backgroundColor;
@property (nonatomic) NSArray layerInstructions;
@property (nonatomic) BOOL enablePostProcessing;
@property (nonatomic) NSArray requiredSourceSampleDataTrackIDs;
- (id)timeRange;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setTimeRange:;
- (id)layerInstructions;
- (BOOL)enablePostProcessing;
- (id)requiredSourceSampleDataTrackIDs;
- (void)setLayerInstructions:;
- (void)setEnablePostProcessing:;
- (void)setRequiredSourceSampleDataTrackIDs:;
+ (id)videoCompositionInstruction;
@end
