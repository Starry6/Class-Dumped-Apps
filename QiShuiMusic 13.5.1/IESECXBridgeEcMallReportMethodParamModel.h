@interface IESECXBridgeEcMallReportMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString btm;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary filterInfo;
@property (nonatomic) NSDictionary bcm;
- (id)bcm;
- (id)btm;
- (void)setBcm:;
- (void)setBtm:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (id)filterInfo;
- (void)setFilterInfo:;
- (void)setParams:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
