@interface AVVideoPerformanceMetrics : NSObject
@property (nonatomic) Q totalNumberOfVideoFrames;
@property (nonatomic) Q numberOfDroppedVideoFrames;
@property (nonatomic) Q numberOfCorruptedVideoFrames;
@property (nonatomic) Q numberOfDisplayCompositedVideoFrames;
@property (nonatomic) Q numberOfNonDisplayCompositedVideoFrames;
@property (nonatomic) double totalFrameDelay;
- (id)init;
- (void)dealloc;
- (id)initWithDictionary:;
- (unsigned long long)totalNumberOfVideoFrames;
- (unsigned long long)numberOfDroppedVideoFrames;
- (unsigned long long)numberOfCorruptedVideoFrames;
- (unsigned long long)numberOfDisplayCompositedVideoFrames;
- (unsigned long long)numberOfNonDisplayCompositedVideoFrames;
- (double)totalFrameDelay;
@end
