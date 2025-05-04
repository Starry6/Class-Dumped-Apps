@interface AWESearchHotSpotAladdinModel : AWEBaseApiModel
@property (nonatomic) AWEHotSpotModel hotSpotModel;
@property (nonatomic) NSArray hotSpotVideoArray;
@property (nonatomic) NSArray relatedInfoModels;
@property (nonatomic) BOOL isFirstCard;
@property (nonatomic) BOOL isHotSpotCollectionMode;
@property (nonatomic) NSString trendingMeasure;
@property (nonatomic) BOOL isPausedByUser;
- (id)hotSpotModel;
- (BOOL)isHotSpotCollectionMode;
- (id)trendingMeasure;
- (id)rawHotSpotVideoArray;
- (void)setHotSpotModel:;
- (void)setHotSpotVideoArray:;
- (id)relatedInfoModels;
- (void)setRelatedInfoModels:;
- (BOOL)isFirstCard;
- (void)setIsFirstCard:;
- (BOOL)isPausedByUser;
- (void)setIsPausedByUser:;
- (id)hotSpotVideoArray;
- (void).cxx_destruct;
+ (id)hotSpotVideoArrayJSONTransformer;
+ (id)relatedInfoModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)hotSpotModelJSONTransformer;
@end
