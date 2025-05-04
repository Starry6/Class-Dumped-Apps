@interface AWEEcomSearchMiddlePagePerfModel : MTLModel
@property (nonatomic) double requestTime;
@property (nonatomic) double responseTime;
@property (nonatomic) double postDataTime;
@property (nonatomic) NSDictionary requestLog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRequestLog:;
- (id)requestLog;
- (void)setPostDataTime:;
- (double)postDataTime;
- (double)requestTime;
- (void)setRequestTime:;
- (double)responseTime;
- (void).cxx_destruct;
- (void)setResponseTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
