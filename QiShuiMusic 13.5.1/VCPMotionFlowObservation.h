@interface VCPMotionFlowObservation : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) NSInteger revision;
- (void)dealloc;
- (id)pixelBuffer;
- (void)setRevision:;
- (int)revision;
- (void)setPixelBuffer:;
@end
