@interface IESECLiveBasicLogDataResultModel : IESLiveBridgeModel
@property (nonatomic) q code;
@property (nonatomic) IESECLiveBasicLogDataDataModel data;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:;
- (void)setCode:;
+ (id)modelCustomPropertyMapper;
@end
