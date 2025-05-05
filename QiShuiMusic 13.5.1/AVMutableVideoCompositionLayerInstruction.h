@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction
@property (nonatomic) NSInteger trackID;
- (int)trackID;
- (void)setTrackID:;
- (void)setTransform:atTime:;
- (void)setTransformRampFromStartTransform:toEndTransform:timeRange:;
- (void)setOpacity:atTime:;
- (void)setOpacityRampFromStartOpacity:toEndOpacity:timeRange:;
- (void)setCropRectangle:atTime:;
- (void)setCropRectangleRampFromStartCropRectangle:toEndCropRectangle:timeRange:;
+ (id)videoCompositionLayerInstructionWithAssetTrack:;
+ (id)videoCompositionLayerInstruction;
@end
