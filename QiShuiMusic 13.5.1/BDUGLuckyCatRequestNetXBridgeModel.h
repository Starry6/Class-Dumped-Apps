@interface BDUGLuckyCatRequestNetXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString method;
@property (nonatomic) @ body;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSNumber enablePrefetch;
- (id)enablePrefetch;
- (id)prefetchDictionaryValue;
- (void)setEnablePrefetch:;
- (id)transferFromJson:;
- (void)setHeader:;
- (id)url;
- (id)body;
- (id)method;
- (void)setUrl:;
- (void)setBody:;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)header;
- (id)params;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
