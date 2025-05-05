@interface IESECEcGetAddressParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber addressType;
@property (nonatomic) BOOL needDetail;
- (BOOL)needDetail;
- (void)setNeedDetail:;
- (void).cxx_destruct;
- (id)addressType;
- (void)setAddressType:;
+ (id)modelCustomPropertyMapper;
@end
