@interface BDXBridgeFetchMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString method;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSNumber needCommonParams;
@property (nonatomic) NSDictionary header;
- (id)needCommonParams;
- (void)setNeedCommonParams:;
- (void)setHeader:;
- (id)url;
- (id)data;
- (id)method;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setMethod:;
- (id)header;
- (id)params;
- (void)setParams:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
