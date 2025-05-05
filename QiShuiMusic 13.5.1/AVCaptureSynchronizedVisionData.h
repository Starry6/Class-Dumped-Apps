@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData
@property (nonatomic) ^{__CVBuffer=} visionDataPixelBuffer;
@property (nonatomic) BOOL visionDataWasDropped;
@property (nonatomic) q droppedReason;
- (void)dealloc;
- (long long)droppedReason;
- (id)visionDataPixelBuffer;
- (BOOL)visionDataWasDropped;
- (id)_initWithVisionDataPixelBuffer:timestamp:visionDataWasDropped:droppedReason:;
@end
