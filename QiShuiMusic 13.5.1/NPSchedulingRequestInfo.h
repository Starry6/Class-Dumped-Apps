@interface NPSchedulingRequestInfo : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) BOOL shouldResolveHostsBeforeRequest;
@property (nonatomic) <NPSchedulingRequestInfoCommonParamsFactory> commonParamsFactory;
- (BOOL)shouldResolveHostsBeforeRequest;
- (id)commonParamsFactory;
- (id)queryItemsWithUrlString:apiVersion:;
- (id)requestToGetHosts;
- (id)requestToGetSchedulingResultWithIPMap:;
- (id)requestURLWithCurrentInfo;
- (void)setCommonParamsFactory:;
- (void)setShouldResolveHostsBeforeRequest:;
- (id)requestURL;
- (id)host;
- (id)copy;
- (void)setHost:;
- (id)initWithHost:;
- (void).cxx_destruct;
+ (id)requestInfoWithHost:;
@end
