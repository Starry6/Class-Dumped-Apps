@interface AWESearchCarSeriesModel : AWEBaseApiModel
@property (nonatomic) NSString uri;
@property (nonatomic) AWESearchCarInfoModel carInfoModel;
@property (nonatomic) NSString infoSource;
@property (nonatomic) NSString aladdinID;
- (id)aladdinID;
- (void)setInfoSource:;
- (id)carInfoModel;
- (void)setCarInfoModel:;
- (id)infoSource;
- (id)uri;
- (void)setUri:;
- (void).cxx_destruct;
+ (id)aladdinIDJSONTransformer;
+ (id)carInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
