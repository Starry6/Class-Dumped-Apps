@interface AWEEcomSearchMiddlePageTransferModel : MTLModel
@property (nonatomic) q code;
@property (nonatomic) NSString response;
@property (nonatomic) AWEEcomSearchMiddlePagePerfModel performance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)code;
- (void)setCode:;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)setPerformance:;
- (id)performance;
+ (id)performanceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
