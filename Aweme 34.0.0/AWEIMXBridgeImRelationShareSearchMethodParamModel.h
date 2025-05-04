@interface AWEIMXBridgeImRelationShareSearchMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString keyword;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setCount:;
- (id)count;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)keyword;
- (void)setKeyword:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
