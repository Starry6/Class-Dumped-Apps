@interface IESECXBridgeEcMallAdReportMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString actionName;
@property (nonatomic) NSNumber section;
@property (nonatomic) NSNumber index;
@property (nonatomic) NSDictionary adExtraData;
- (void)setAdExtraData:;
- (id)adExtraData;
- (void)setSection:;
- (id)index;
- (void)setActionName:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)actionName;
- (id)section;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
