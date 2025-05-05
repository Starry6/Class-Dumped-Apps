@interface IESIMSearchHotSpotAladdinModel : IESIMBaseApiModel
@property (nonatomic) IESIMHotSpotModel hotSpotModel;
@property (nonatomic) NSArray hotSpotVideoArray;
@property (nonatomic) NSArray relatedInfoModels;
@property (nonatomic) BOOL isFirstCard;
@property (nonatomic) BOOL isHotSpotCollectionMode;
@property (nonatomic) NSString trendingMeasure;
@property (nonatomic) BOOL isPausedByUser;
- (id)trendingMeasure;
- (void)setIsFirstCard:;
- (id)hotSpotModel;
- (id)hotSpotVideoArray;
- (BOOL)isFirstCard;
- (BOOL)isHotSpotCollectionMode;
- (BOOL)isPausedByUser;
- (id)rawHotSpotVideoArray;
- (id)relatedInfoModels;
- (void)setHotSpotModel:;
- (void)setHotSpotVideoArray:;
- (void)setIsPausedByUser:;
- (void)setRelatedInfoModels:;
- (void).cxx_destruct;
+ (id)hotSpotModelJSONTransformer;
+ (id)hotSpotVideoArrayJSONTransformer;
+ (id)relatedInfoModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
