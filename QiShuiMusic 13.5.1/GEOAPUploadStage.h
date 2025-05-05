@interface GEOAPUploadStage : NSObject
@property (nonatomic) GEOAPURLSessionConfig urlSessionConfig;
@property (nonatomic) double ttl;
- (id)initWithURLSessionConfig:ttl:;
- (id)urlSessionConfig;
- (void).cxx_destruct;
- (double)ttl;
@end
