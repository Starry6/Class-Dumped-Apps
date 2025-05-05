@interface ETDataSourceWithCache : NSObject
- (id)initWithDataSource:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:;
- (id)initWithDataSource:dumpPath:;
@end
