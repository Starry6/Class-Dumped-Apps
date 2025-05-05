@interface ARFrameTimingData : NSObject
@property (nonatomic) double videoLatency;
@property (nonatomic) NSDictionary timestamps;
- (id)init;
- (void).cxx_destruct;
- (id)timestamps;
- (void)addTimestamp:forDataOfClass:;
- (double)videoLatency;
- (void)setVideoLatency:;
@end
