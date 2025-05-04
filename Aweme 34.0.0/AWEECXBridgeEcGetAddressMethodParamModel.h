@interface AWEECXBridgeEcGetAddressMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber address_type;
@property (nonatomic) NSString btm;
@property (nonatomic) BOOL need_detail;
- (id)btm;
- (void)setBtm:;
- (BOOL)need_detail;
- (id)address_type;
- (void)setAddress_type:;
- (void)setNeed_detail:;
- (void).cxx_destruct;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
