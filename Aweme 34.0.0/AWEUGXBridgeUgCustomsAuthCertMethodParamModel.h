@interface AWEUGXBridgeUgCustomsAuthCertMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber certOperator;
@property (nonatomic) NSString certID;
@property (nonatomic) NSNumber expireTime;
@property (nonatomic) NSDictionary bizData;
@property (nonatomic) NSDictionary monitorParams;
- (void)setBizData:;
- (id)bizData;
- (id)certID;
- (void)setCertID:;
- (id)monitorParams;
- (void)setMonitorParams:;
- (id)certOperator;
- (void)setCertOperator:;
- (void).cxx_destruct;
- (id)expireTime;
- (void)setExpireTime:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
