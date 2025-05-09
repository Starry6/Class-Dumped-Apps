@interface AWESearchEcommercePhotoSearchDataResponse : AWESearchResultCachalotDataResponse
@property (nonatomic) NSDictionary replaceCachalotDataMap;
@property (nonatomic) NSString defaultFormat;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) NSString imageUri;
@property (nonatomic) NSArray detections;
@property (nonatomic) q playMode;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel filterComponent;
@property (nonatomic) NSArray videoQueryData;
@property (nonatomic) AWEGeneralSearchBackgroundModel searchBackgroundConfig;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel originalProductCard;
@property (nonatomic) NSDictionary toastInfo;
@property (nonatomic) AWEDoubleColumnSearchActivityModel searchMarketing;
@property (nonatomic) NSArray topCardItems;
@property (nonatomic) NSArray sortSectionItems;
@property (nonatomic) AWEEcommerceSearchSuspensionItemsSectionModel suspensionItemsSection;
@property (nonatomic) NSString ecomSearchPassThrough;
@property (nonatomic) NSString ecomSearchAllPassThrough;
@property (nonatomic) NSString searchChannel;
@property (nonatomic) NSNumber moreProductButtonIndex;
@property (nonatomic) NSString nextPageSearchId;
- (id)extraModel;
- (void)setExtraModel:;
- (void)setImageUri:;
- (id)imageUri;
- (id)toastInfo;
- (void)setToastInfo:;
- (id)searchChannel;
- (void)setSearchChannel:;
- (id)ecomSearchPassThrough;
- (void)setEcomSearchPassThrough:;
- (id)ecomSearchAllPassThrough;
- (void)setEcomSearchAllPassThrough:;
- (id)searchBackgroundConfig;
- (void)setSearchBackgroundConfig:;
- (void)setTopCardItems:;
- (id)originalProductCard;
- (id)topCardItems;
- (id)moreProductButtonIndex;
- (void)setMoreProductButtonIndex:;
- (void)setSuspensionItemsSection:;
- (id)suspensionItemsSection;
- (id)replaceCachalotDataMap;
- (void)setReplaceCachalotDataMap:;
- (id)filterComponent;
- (void)setFilterComponent:;
- (id)videoQueryData;
- (void)setVideoQueryData:;
- (void)setOriginalProductCard:;
- (id)searchMarketing;
- (void)setSearchMarketing:;
- (id)sortSectionItems;
- (void)setSortSectionItems:;
- (id)nextPageSearchId;
- (void)setNextPageSearchId:;
- (id)defaultFormat;
- (void).cxx_destruct;
- (void)setDefaultFormat:;
- (id)detections;
- (void)setDetections:;
- (long long)playMode;
- (void)setPlayMode:;
+ (id)extraModelJSONTransformer;
+ (id)searchBackgroundConfigJSONTransformer;
+ (id)filterComponentJSONTransformer;
+ (id)videoQueryDataJSONTransformer;
+ (id)originalProductCardJSONTransformer;
+ (id)suspensionItemsSectionJSONTransformer;
+ (id)topCardItemsJSONTransformer;
+ (id)sortSectionItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
