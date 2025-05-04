@interface AWEECXBridgeEcSetAddressMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber source_type;
@property (nonatomic) BOOL is_session;
@property (nonatomic) NSDictionary address;
- (id)source_type;
- (void)setSource_type:;
- (BOOL)is_session;
- (void)setIs_session:;
- (void)setAddress:;
- (void).cxx_destruct;
- (id)address;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
