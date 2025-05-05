@interface ETDataSourceWithExtractor : NSObject
- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:;
- (id)initWithDataSource:extractor:;
@end
