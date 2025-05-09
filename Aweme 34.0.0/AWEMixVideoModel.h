@interface AWEMixVideoModel : AWEBaseApiModel
@property (nonatomic) NSArray shareExtVideoCoverURLs;
@property (nonatomic) NSArray shareExtVideoItems;
@property (nonatomic) NSString mixExtraString;
@property (nonatomic) NSString mixID;
@property (nonatomic) NSString mixName;
@property (nonatomic) BOOL hasRecommendMix;
@property (nonatomic) BOOL isWholeMix;
@property (nonatomic) NSNumber isSerialMix;
@property (nonatomic) NSString desc;
@property (nonatomic) NSNumber enableRequestAdInMixDetail;
@property (nonatomic) NSDictionary mixExtra;
@property (nonatomic) AWEUserModel author;
@property (nonatomic) AWEURLModel coverUrl;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) AWEMixVideoStatusModel statusModel;
@property (nonatomic) AWEMixVideoStaticsModel staticsModel;
@property (nonatomic) AWEShareModel shareInfo;
@property (nonatomic) Q mixType;
@property (nonatomic) Q mixInnerType;
@property (nonatomic) Q mixPicType;
@property (nonatomic) AWEMixAuthorInfoModel autoMixAuthorInfo;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSNumber updateTime;
@property (nonatomic) NSString watchedItem;
@property (nonatomic) NSNumber watchedEpisode;
@property (nonatomic) NSString xiguaExtraInfo;
@property (nonatomic) BOOL disableDisplay;
@property (nonatomic) BOOL isCreatedSoon;
@property (nonatomic) AWEVideoChargeStrategyStruct chargeStrategyModel;
@property (nonatomic) NSString gameCollectionId;
@property (nonatomic) NSString watchedItemID;
@property (nonatomic) AWEPlayletChargeInfoModel paymentChargeInfoModel;
@property (nonatomic) AWEPaymentEntertainmentProductModel paymentEntertainmentProductModel;
@property (nonatomic) BOOL isIaa;
@property (nonatomic) AWECodeGenMixVipInfoModel mixVipInfoModel;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)mixExtra;
- (id)mixName;
- (id)mixID;
- (id)staticsModel;
- (id)paymentChargeInfoModel;
- (id)mixPicTypeDesc;
- (unsigned long long)mixType;
- (void)setCoverUrl:;
- (id)coverUrl;
- (void)setMixName:;
- (id)mixExtraString;
- (unsigned long long)mixPicType;
- (BOOL)isTheLastEpisode;
- (long long)episodeValue;
- (BOOL)isWholeMix;
- (id)gameCollectionId;
- (BOOL)isFromMediumPlayList;
- (BOOL)isMixPlaylet;
- (void)syncFromMixInfo:;
- (void)setMixID:;
- (BOOL)hasRecommendMix;
- (void)setHasRecommendMix:;
- (void)setIsWholeMix:;
- (id)isSerialMix;
- (void)setIsSerialMix:;
- (id)enableRequestAdInMixDetail;
- (void)setEnableRequestAdInMixDetail:;
- (void)setMixExtra:;
- (void)setStaticsModel:;
- (void)setMixType:;
- (unsigned long long)mixInnerType;
- (void)setMixInnerType:;
- (void)setMixPicType:;
- (id)autoMixAuthorInfo;
- (void)setAutoMixAuthorInfo:;
- (id)watchedItem;
- (void)setWatchedItem:;
- (id)watchedEpisode;
- (void)setWatchedEpisode:;
- (id)xiguaExtraInfo;
- (void)setXiguaExtraInfo:;
- (BOOL)disableDisplay;
- (void)setDisableDisplay:;
- (BOOL)isCreatedSoon;
- (void)setIsCreatedSoon:;
- (id)chargeStrategyModel;
- (void)setChargeStrategyModel:;
- (void)setGameCollectionId:;
- (id)watchedItemID;
- (void)setWatchedItemID:;
- (void)setPaymentChargeInfoModel:;
- (id)paymentEntertainmentProductModel;
- (void)setPaymentEntertainmentProductModel:;
- (BOOL)isIaa;
- (void)setIsIaa:;
- (id)mixVipInfoModel;
- (void)setMixVipInfoModel:;
- (void)setMixExtraString:;
- (id)shareExtVideoCoverURLs;
- (id)shareExtVideoItems;
- (void)setShareExtVideoCoverURLs:;
- (void)setShareExtVideoItems:;
- (id)author;
- (id)createTime;
- (id)shareInfo;
- (id)updateTime;
- (void)setDesc:;
- (id)desc;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setShareInfo:;
- (void)setUpdateTime:;
- (void)setStatusModel:;
- (id)statusModel;
+ (id)coverUrlJSONTransformer;
+ (id)paymentEntertainmentProductModelJSONTransformer;
+ (id)paymentChargeInfoModelJSONTransformer;
+ (id)iconUrlJSONTransformer;
+ (id)statusModelJSONTransformer;
+ (id)staticsModelJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)shareInfoModelJSONTransformer;
+ (id)authorInfoJSONTransformer;
+ (id)chargeStrategyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
