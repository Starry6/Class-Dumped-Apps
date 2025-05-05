@interface IESLiveGetLatestWRDSDataDataModel : IESLiveBridgeModel
@property (nonatomic) NSString wrdsKey;
@property (nonatomic) NSString wrdsSubKey;
@property (nonatomic) NSString wrdsVersion;
@property (nonatomic) NSString wrdsData;
+ (id)modelCustomPropertyMapper;
@end
