@interface BWPhotoEncoderNodeAttachedMediaConfiguration : NSObject
@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) BOOL propagatesDownstream;
- (float)mainImageDownscalingFactor;
- (id)initWithMainImageDownscalingFactor:propagatesDownstream:;
- (BOOL)propagatesDownstream;
@end
