@interface IESECEcSetAddressParamModel : IESLiveBridgeModel
@property (nonatomic) NSDictionary address;
@property (nonatomic) NSNumber sourceType;
@property (nonatomic) BOOL isSession;
- (id)sourceType;
- (void)setAddress:;
- (void)setSourceType:;
- (void).cxx_destruct;
- (id)address;
- (BOOL)isSession;
- (void)setIsSession:;
+ (id)modelCustomPropertyMapper;
@end
