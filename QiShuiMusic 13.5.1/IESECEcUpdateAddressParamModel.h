@interface IESECEcUpdateAddressParamModel : IESLiveBridgeModel
@property (nonatomic) NSDictionary address;
@property (nonatomic) NSString action;
- (void)setAddress:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (id)address;
+ (id)modelCustomPropertyMapper;
@end
