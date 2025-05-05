@interface BDUGLuckycatGetDogCommonParamsXBridgeModel : BDXBridgeModel
@property (nonatomic) NSDictionary dogParams;
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSDictionary dogParamsJson;
- (id)dogParams;
- (id)dogParamsJson;
- (void)setDogParams:;
- (void)setDogParamsJson:;
- (id)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
