@interface AWEVisionCameraPerformanceTimestamp : NSObject
@property (nonatomic) Q beginPerformanceTimestamp;
@property (nonatomic) Q receivedCameraFirstFramePerformanceTimestamp;
@property (nonatomic) Q firstViewRenderPerformanceTimestamp;
- (unsigned long long)beginPerformanceTimestamp;
- (void)setBeginPerformanceTimestamp:;
- (unsigned long long)receivedCameraFirstFramePerformanceTimestamp;
- (void)setReceivedCameraFirstFramePerformanceTimestamp:;
- (unsigned long long)firstViewRenderPerformanceTimestamp;
- (void)setFirstViewRenderPerformanceTimestamp:;
@end
