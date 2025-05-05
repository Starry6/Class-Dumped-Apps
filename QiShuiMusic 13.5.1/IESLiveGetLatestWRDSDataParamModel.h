@interface IESLiveGetLatestWRDSDataParamModel : IESLiveBridgeModel
@property (nonatomic) NSString wrdsKey;
@property (nonatomic) NSString wrdsSubKey;
+ (id)modelCustomPropertyMapper;
@end
