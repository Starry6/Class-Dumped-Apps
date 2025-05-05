@interface IDSGlobalLinkRequestMetadata : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) NSString token;
@property (nonatomic) IDSGFTMetricsRequest metricsRequest;
- (id)token;
- (double)startTime;
- (void).cxx_destruct;
- (id)metricsRequest;
- (id)initWithStartTime:token:metricsRequest:;
@end
