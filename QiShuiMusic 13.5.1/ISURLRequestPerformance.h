@interface ISURLRequestPerformance : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) NSURLResponse URLResponse;
@property (nonatomic) double finishInterval;
@property (nonatomic) double receivedResponseInterval;
@property (nonatomic) double renderBeginInterval;
@property (nonatomic) double renderEndInterval;
- (void)dealloc;
- (void)setStartTime:;
- (double)startTime;
- (id)URLResponse;
- (void)setURLResponse:;
- (double)finishInterval;
- (double)receivedResponseInterval;
- (void)setFinishTime:;
- (double)renderBeginInterval;
- (double)renderEndInterval;
- (void)setReceivedResponseTime:;
- (void)setRenderBeginTime:;
- (void)setRenderFinishTime:;
@end
