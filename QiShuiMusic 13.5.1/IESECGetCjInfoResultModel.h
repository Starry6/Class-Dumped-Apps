@interface IESECGetCjInfoResultModel : IESLiveBridgeModel
@property (nonatomic) q code;
@property (nonatomic) IESECGetCjInfoDataModel data;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:;
- (void)setCode:;
+ (id)modelCustomPropertyMapper;
@end
