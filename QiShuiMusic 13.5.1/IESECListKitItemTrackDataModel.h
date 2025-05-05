@interface IESECListKitItemTrackDataModel : MTLModel
@property (nonatomic) NSDictionary commonData;
@property (nonatomic) NSArray exposureDatas;
@property (nonatomic) NSArray clickDatas;
@property (nonatomic) NSDictionary adActionData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adActionData;
- (id)clickDatas;
- (id)commonData;
- (id)exposureDatas;
- (void)setAdActionData:;
- (void)setClickDatas:;
- (void)setCommonData:;
- (void)setExposureDatas:;
- (void).cxx_destruct;
+ (id)clickDatasJSONTransformer;
+ (id)exposureDatasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
