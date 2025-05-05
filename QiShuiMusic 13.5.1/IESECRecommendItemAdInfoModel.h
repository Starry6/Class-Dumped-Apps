@interface IESECRecommendItemAdInfoModel : MTLModel
@property (nonatomic) q adId;
@property (nonatomic) BOOL showAdTag;
@property (nonatomic) NSString rawData;
@property (nonatomic) NSDictionary rawDataDict;
@property (nonatomic) IESECRecommendItemRawAdDataModel rawAdData;
@property (nonatomic) double showTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rawAdData;
- (id)rawDataDict;
- (void)setShowAdTag:;
- (void)setShowTime:;
- (BOOL)showAdTag;
- (double)showTime;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)rawData;
- (long long)adId;
- (void)setAdId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
