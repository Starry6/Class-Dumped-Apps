@interface ETDataSourceBuf : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:;
- (void)setBlobs:numberOfDataPoints:nonBatches:;
- (id)dataAtIndex:key:;
@end
