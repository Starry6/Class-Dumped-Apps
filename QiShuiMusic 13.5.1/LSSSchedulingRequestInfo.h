@interface LSSSchedulingRequestInfo : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) <LSSSchedulingRequestInfoCommonParamsFactory> commonParamsFactory;
- (id)commonParamsFactory;
- (id)queryItemsWithUrlString:ApiVersion:;
- (id)requestToGetHosts;
- (id)requestToGetSchedulingResultWithIPMap:;
- (id)requestURLWithCurrentInfo;
- (void)setCommonParamsFactory:;
- (id)requestURL;
- (id)host;
- (id)copy;
- (void)setHost:;
- (id)initWithHost:;
- (void).cxx_destruct;
+ (id)requestInfoWithHost:;
@end
