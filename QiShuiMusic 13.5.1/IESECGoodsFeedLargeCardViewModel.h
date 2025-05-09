@interface IESECGoodsFeedLargeCardViewModel : NSObject
@property (nonatomic) q cardType;
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) q carouselIndex;
@property (nonatomic) NSMutableArray sectionsInfo;
@property (nonatomic) q entryLocation;
@property (nonatomic) {UIEdgeInsets=dddd} containerInsets;
@property (nonatomic) IESECFeedLiveRecommendModel liveModel;
@property (nonatomic) IESECVideoRecommendModel videoModel;
@property (nonatomic) IESECGoodsFeedRankingCardModel rankingModel;
@property (nonatomic) IESECFeedResourceCardModel resourceCardModel;
@property (nonatomic) IESECHeadVideoModel headVideo;
@property (nonatomic) IESECRecommendCommonProductModel productModel;
@property (nonatomic) NSArray tagModels;
@property (nonatomic) NSArray bulletTags;
@property (nonatomic) BOOL danmakuState;
@property (nonatomic) NSString bizTag;
@property (nonatomic) NSString sceneTag;
@property (nonatomic) BOOL hideShopButton;
@property (nonatomic) BOOL isShowActivityImage;
@property (nonatomic) BOOL isManualSlided;
@property (nonatomic) BOOL shouldStartAutoSlide;
@property (nonatomic) NSString exposedMessage;
@property (nonatomic) NSString indemnificationMessage;
@property (nonatomic) NSString indemnificationMessageOnRight;
@property (nonatomic) BOOL isFirstCard;
@property (nonatomic) double messageDisplayAlpha;
@property (nonatomic) double recommendTagViewAlpha;
@property (nonatomic) BOOL indemnificationOnRight;
@property (nonatomic) BOOL hasShownCommentCount;
@property (nonatomic) IESECRelationFeedCommentInfo commentInfo;
@property (nonatomic) NSDictionary storeTrackInfo;
@property (nonatomic) IESECGoodsCommentViewModel goodsCommentViewModel;
@property (nonatomic) BOOL tagViewDisplayed;
@property (nonatomic) NSString headerText;
@property (nonatomic) BOOL shouldShowSameGoodEntrance;
@property (nonatomic) double tagImageHeight;
@property (nonatomic) BOOL showSkeleton;
@property (nonatomic) NSString discountContent;
@property (nonatomic) IESECRecommendReasonModel recReason;
@property (nonatomic) BOOL hasLayoutImage;
@property (nonatomic) BOOL showindexIndicator;
@property (nonatomic) q searchSameGoodsShow;
@property (nonatomic) q searchSameGoodsShowPosition;
@property (nonatomic) q searchResourceCardStyle;
@property (nonatomic) q searchCardFrequency;
@property (nonatomic) q windowEntryPriority;
@property (nonatomic) @? bstBindAction;
@property (nonatomic) NSDictionary compareDealsBarCommonParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)discountContent;
- (void)setCompareDealsBarCommonParams:;
- (void)setCommentInfo:;
- (void)setIsFirstCard:;
- (void)setSearchSameGoodsShowPosition:;
- (id)bizTag;
- (id)bstBindAction;
- (id)bulletTags;
- (long long)carouselIndex;
- (id)commonSceneTag;
- (id)compareDealsBarCommonParams;
- (BOOL)danmakuState;
- (id)diffIdentifier;
- (long long)entryLocation;
- (id)exposedMessage;
- (id)goodsCommentViewModel;
- (BOOL)hasLayoutImage;
- (BOOL)hasShownCommentCount;
- (id)headVideo;
- (BOOL)hideShopButton;
- (id)indemnificationMessage;
- (id)indemnificationMessageOnRight;
- (BOOL)indemnificationOnRight;
- (BOOL)isAvaliable;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)isFirstCard;
- (BOOL)isManualSlided;
- (BOOL)isShowActivityImage;
- (id)liveModel;
- (double)messageDisplayAlpha;
- (id)productModel;
- (id)rankingModel;
- (id)recReason;
- (double)recommendTagViewAlpha;
- (id)resourceCardModel;
- (id)sceneTag;
- (long long)searchCardFrequency;
- (long long)searchResourceCardStyle;
- (long long)searchSameGoodsShow;
- (long long)searchSameGoodsShowPosition;
- (void)setBizTag:;
- (void)setBstBindAction:;
- (void)setBulletTags:;
- (void)setCarouselIndex:;
- (void)setContainerInsets:;
- (void)setDanmakuState:;
- (void)setDiscountContent:;
- (void)setEntryLocation:;
- (void)setExposedMessage:;
- (void)setGoodsCommentViewModel:;
- (void)setHasLayoutImage:;
- (void)setHasShownCommentCount:;
- (void)setHeadVideo:;
- (void)setHideShopButton:;
- (void)setIndemnificationMessage:;
- (void)setIndemnificationMessageOnRight:;
- (void)setIndemnificationOnRight:;
- (void)setIsManualSlided:;
- (void)setIsShowActivityImage:;
- (void)setLiveModel:;
- (void)setMessageDisplayAlpha:;
- (void)setProductModel:;
- (void)setRankingModel:;
- (void)setRecReason:;
- (void)setRecommendTagViewAlpha:;
- (void)setResourceCardModel:;
- (void)setSceneTag:;
- (void)setSearchCardFrequency:;
- (void)setSearchResourceCardStyle:;
- (void)setSearchSameGoodsShow:;
- (void)setSectionsInfo:;
- (void)setShouldShowSameGoodEntrance:;
- (void)setShouldStartAutoSlide:;
- (void)setShowSkeleton:;
- (void)setShowindexIndicator:;
- (void)setStoreTrackInfo:;
- (void)setTagImageHeight:;
- (void)setTagViewDisplayed:;
- (void)setVideoModel:;
- (void)setWindowEntryPriority:;
- (BOOL)shouldShowSameGoodEntrance;
- (BOOL)shouldStartAutoSlide;
- (BOOL)showRecReason;
- (BOOL)showSkeleton;
- (BOOL)showindexIndicator;
- (id)storeTrackInfo;
- (double)tagImageHeight;
- (id)tagModels;
- (BOOL)tagViewDisplayed;
- (id)videoModel;
- (long long)windowEntryPriority;
- (id)headerText;
- (id)parameters;
- (id)sectionsInfo;
- (void).cxx_destruct;
- (void)setParameters:;
- (void)setHeaderText:;
- (long long)cardType;
- (void)setCardType:;
- (id)containerInsets;
- (id)commentInfo;
@end
