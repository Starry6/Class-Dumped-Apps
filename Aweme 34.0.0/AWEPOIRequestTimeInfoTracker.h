@interface AWEPOIRequestTimeInfoTracker : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSDate startTime;
@property (nonatomic) TTHttpResponseTimingInfo timingInfo;
- (void)markStartRequest;
- (void)markGetResponseWithTimingInfo:;
- (id)timingInfo;
- (void)setStartTime:;
- (id)path;
- (id)initWithPath:;
- (void).cxx_destruct;
- (id)startTime;
- (void)setPath:;
- (void)setTimingInfo:;
@end
