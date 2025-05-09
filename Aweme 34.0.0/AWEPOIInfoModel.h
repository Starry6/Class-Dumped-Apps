@interface AWEPOIInfoModel : AWEBaseApiModel
@property (nonatomic) NSString distanceToSpace;
@property (nonatomic) NSArray headerImages;
@property (nonatomic) NSString subTypeForShare;
@property (nonatomic) NSString costStringForShare;
@property (nonatomic) BOOL modalScene;
@property (nonatomic) BOOL isFromPOITravel;
@property (nonatomic) NSString cpsInfo;
@property (nonatomic) NSString poiContentExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString f_poiID;
@property (nonatomic) NSString f_poiName;
@property (nonatomic) NSString f_typeCode;
@property (nonatomic) <IESLLFuseAddressModel> f_addressInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSNumber moduelUnique;
@property (nonatomic) NSDictionary extraLogInfo;
@property (nonatomic) NSDictionary panelExtraData;
@property (nonatomic) AWEPOIItemAnchorInfo cacheAnchorInfo;
@property (nonatomic) AWEIndirectPOIInfoModel cacheIndirectPOIInfo;
@property (nonatomic) NSDictionary cachePOIExtendItemDict;
@property (nonatomic) AWEPOIAnchorCommentInfo cachePOICommentInfo;
@property (nonatomic) NSString serviceTypeBury;
@property (nonatomic) NSString productType;
@property (nonatomic) NSString productBizline;
@property (nonatomic) NSString distanceMetersBury;
@property (nonatomic) NSDictionary extendJsonDictionary;
@property (nonatomic) AWEPOIAnchorBehaviorModel cacheAnchorBehavior;
@property (nonatomic) q searchRegionType;
@property (nonatomic) NSString searchRegionTypeString;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString typeCode;
@property (nonatomic) AWEPOITypeModel poiBackendType;
@property (nonatomic) q userCount;
@property (nonatomic) q itemCount;
@property (nonatomic) NSString viewCount;
@property (nonatomic) NSString popularity;
@property (nonatomic) NSString collectedCount;
@property (nonatomic) AWEPOIShareModel shareInfo;
@property (nonatomic) AWEURLModel coverHD;
@property (nonatomic) AWEURLModel coverLarge;
@property (nonatomic) AWEURLModel coverMedium;
@property (nonatomic) AWEURLModel coverThumb;
@property (nonatomic) AWEURLModel coverItem;
@property (nonatomic) NSString poiTypeName;
@property (nonatomic) NSString poiAreaName;
@property (nonatomic) NSString distance;
@property (nonatomic) q distanceMeter;
@property (nonatomic) AWEAddressModel addressInfo;
@property (nonatomic) q iconType;
@property (nonatomic) double latitude;
@property (nonatomic) NSNumber latitudeGCJ;
@property (nonatomic) double longitude;
@property (nonatomic) NSNumber longitudeGCJ;
@property (nonatomic) BOOL userFavorited;
@property (nonatomic) AWEURLModel iconEntry;
@property (nonatomic) AWEURLModel iconMap;
@property (nonatomic) AWEURLModel iconLocation;
@property (nonatomic) NSNumber expandType;
@property (nonatomic) Q detailType;
@property (nonatomic) NSString voucherInfo;
@property (nonatomic) NSString poiSubtitle;
@property (nonatomic) Q subtitleType;
@property (nonatomic) AWEPOICardModel poiCard;
@property (nonatomic) BOOL recommendFromMedia;
@property (nonatomic) NSArray voucherReleaseAreas;
@property (nonatomic) BOOL shouldShowHalfCard;
@property (nonatomic) BOOL isTopRecommend;
@property (nonatomic) BOOL isAdminArea;
@property (nonatomic) NSArray iconServiceTypeList;
@property (nonatomic) NSString itemTag;
@property (nonatomic) q guessExpect;
@property (nonatomic) q withRecommendTag;
@property (nonatomic) BOOL isUserWithinGeoFence;
@property (nonatomic) NSString extJSONString;
@property (nonatomic) AWEPOIProductSimpleModel simpleProduct;
@property (nonatomic) NSDictionary shootReward;
@property (nonatomic) double cost;
@property (nonatomic) NSArray poiDetailTags;
@property (nonatomic) AWEPOITradingModel poiTrading;
@property (nonatomic) q spuCount;
@property (nonatomic) q cpsSpuCount;
@property (nonatomic) BOOL isCommerceIntention;
@property (nonatomic) NSString videoSpuLynxUrl;
@property (nonatomic) BOOL isCps;
@property (nonatomic) NSString searchTagStr;
@property (nonatomic) NSString searchRightConfStr;
@property (nonatomic) NSDictionary anchorPostExt;
@property (nonatomic) BOOL canJumpPoiListPage;
@property (nonatomic) NSString autoOpenSpuPageSchema;
@property (nonatomic) NSString postVideoSpuLynxUrl;
@property (nonatomic) AWEPOIAnchorLifeExtraModel lifeExtra;
@property (nonatomic) AWEPOIScanActivityInfo scanActivityInfo;
@property (nonatomic) NSString imShareHintText;
@property (nonatomic) UIImage poiDetailScreenShoot;
@property (nonatomic) UIImage mapThumbnail;
@property (nonatomic) NSArray recommendedAwemeCovers;
@property (nonatomic) AWECouponModel coupon;
@property (nonatomic) BOOL isFoodGroupBuy;
@property (nonatomic) BOOL isAtCallBackCollect;
@property (nonatomic) BOOL isFromCommentPublishNotice;
@property (nonatomic) NSString poi3ClassType;
@property (nonatomic) NSArray poiMapRankEntry;
@property (nonatomic) NSString feedTTLogID;
@property (nonatomic) NSString anchorGuideTitle;
@property (nonatomic) NSString exploreURL;
@property (nonatomic) Q entrySuffixType;
@property (nonatomic) NSString entrySuffixDesc;
@property (nonatomic) NSString cpsDetailLynxUrl;
@property (nonatomic) NSArray styleEffectIds;
@property (nonatomic) NSString spuCardLynxUrl;
@property (nonatomic) q spuCardExtendTime;
- (void)setPopularity:;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:;
- (BOOL)extraIsAdminArea;
- (unsigned long long)extraInfoType;
- (id)poiID;
- (id)poiBackendType;
- (id)POIItemAnchorInfo;
- (id)poiName;
- (id)anchorBehavior;
- (id)indirectPOIInfo;
- (BOOL)userFavorited;
- (id)extraLogInfo;
- (void)setUserFavorited:;
- (void)setCoverHD:;
- (void)setCoverLarge:;
- (void)setCoverMedium:;
- (void)setCoverThumb:;
- (id)collectedCount;
- (void)setCollectedCount:;
- (id)voucherInfo;
- (void)setVoucherInfo:;
- (id)iconEntry;
- (void)setPoiBackendType:;
- (id)poiContentExtra;
- (void)setPoiContentExtra:;
- (long long)searchRegionType;
- (void)setSearchRegionType:;
- (void)setPoiName:;
- (id)coupon;
- (void)setCoupon:;
- (void)setPoiID:;
- (id)iconMap;
- (void)setIconMap:;
- (id)backendType;
- (BOOL)isCommerceIntention;
- (void)setIsCommerceIntention:;
- (id)coverItem;
- (void)setCoverItem:;
- (id)recommendedAwemeCovers;
- (void)setRecommendedAwemeCovers:;
- (void)setAddressInfo:;
- (id)coverHD;
- (id)coverLarge;
- (id)coverMedium;
- (id)coverThumb;
- (id)poiAreaName;
- (void)setPoiAreaName:;
- (id)poiTypeName;
- (void)setPoiTypeName:;
- (id)voucherReleaseAreas;
- (void)setVoucherReleaseAreas:;
- (id)iconServiceTypeList;
- (void)setIconServiceTypeList:;
- (BOOL)isAdminArea;
- (void)setIsAdminArea:;
- (id)extendJsonDictionary;
- (id)searchTagStr;
- (id)searchRightConfStr;
- (id)anchorPostExt;
- (id)cachePOIExtendItemDict;
- (id)p_extendJsonDictionary;
- (id)extJSONString;
- (id)searchTagDesc;
- (id)searchRightConfDesc;
- (BOOL)isRecommendForPublish;
- (id)anchorGuideTitle;
- (id)exploreURL;
- (unsigned long long)entrySuffixType;
- (id)entrySuffixDesc;
- (id)serviceTypeBury;
- (id)productBizline;
- (id)distanceMetersBury;
- (id)spuCardLynxUrl;
- (long long)spuCardExtendTime;
- (id)poiCommentInfo;
- (id)searchRegionTypeString;
- (long long)distanceMeter;
- (void)setDistanceMeter:;
- (id)latitudeGCJ;
- (void)setLatitudeGCJ:;
- (id)longitudeGCJ;
- (void)setLongitudeGCJ:;
- (void)setIconEntry:;
- (id)expandType;
- (void)setExpandType:;
- (id)poiSubtitle;
- (void)setPoiSubtitle:;
- (void)setSubtitleType:;
- (id)poiCard;
- (void)setPoiCard:;
- (BOOL)recommendFromMedia;
- (void)setRecommendFromMedia:;
- (BOOL)shouldShowHalfCard;
- (void)setShouldShowHalfCard:;
- (BOOL)isTopRecommend;
- (void)setIsTopRecommend:;
- (long long)guessExpect;
- (void)setGuessExpect:;
- (long long)withRecommendTag;
- (void)setWithRecommendTag:;
- (BOOL)isUserWithinGeoFence;
- (void)setIsUserWithinGeoFence:;
- (void)setExtJSONString:;
- (id)simpleProduct;
- (void)setSimpleProduct:;
- (id)shootReward;
- (void)setShootReward:;
- (id)poiDetailTags;
- (void)setPoiDetailTags:;
- (id)poiTrading;
- (void)setPoiTrading:;
- (long long)spuCount;
- (void)setSpuCount:;
- (long long)cpsSpuCount;
- (void)setCpsSpuCount:;
- (id)videoSpuLynxUrl;
- (void)setVideoSpuLynxUrl:;
- (BOOL)isCps;
- (void)setIsCps:;
- (void)setSearchTagStr:;
- (void)setSearchRightConfStr:;
- (void)setAnchorPostExt:;
- (BOOL)canJumpPoiListPage;
- (void)setCanJumpPoiListPage:;
- (id)autoOpenSpuPageSchema;
- (void)setAutoOpenSpuPageSchema:;
- (id)postVideoSpuLynxUrl;
- (void)setPostVideoSpuLynxUrl:;
- (id)lifeExtra;
- (void)setLifeExtra:;
- (id)scanActivityInfo;
- (void)setScanActivityInfo:;
- (id)imShareHintText;
- (void)setImShareHintText:;
- (id)poiDetailScreenShoot;
- (void)setPoiDetailScreenShoot:;
- (id)mapThumbnail;
- (void)setMapThumbnail:;
- (BOOL)isFoodGroupBuy;
- (void)setIsFoodGroupBuy:;
- (BOOL)isAtCallBackCollect;
- (void)setIsAtCallBackCollect:;
- (BOOL)isFromCommentPublishNotice;
- (void)setIsFromCommentPublishNotice:;
- (id)poi3ClassType;
- (void)setPoi3ClassType:;
- (id)poiMapRankEntry;
- (void)setPoiMapRankEntry:;
- (id)feedTTLogID;
- (void)setFeedTTLogID:;
- (id)cpsDetailLynxUrl;
- (void)setCpsDetailLynxUrl:;
- (id)styleEffectIds;
- (void)setStyleEffectIds:;
- (void)setSpuCardLynxUrl:;
- (void)setSpuCardExtendTime:;
- (id)cacheAnchorInfo;
- (void)setCacheAnchorInfo:;
- (id)cacheIndirectPOIInfo;
- (void)setCacheIndirectPOIInfo:;
- (void)setCachePOIExtendItemDict:;
- (id)cachePOICommentInfo;
- (void)setCachePOICommentInfo:;
- (void)setServiceTypeBury:;
- (void)setProductBizline:;
- (void)setDistanceMetersBury:;
- (void)setExtendJsonDictionary:;
- (id)cacheAnchorBehavior;
- (void)setCacheAnchorBehavior:;
- (id)distanceToSpace;
- (void)setDistanceToSpace:;
- (BOOL)modalScene;
- (id)headerImages;
- (id)subTypeForShare;
- (id)costStringForShare;
- (void)setModalScene:;
- (void)setHeaderImages:;
- (void)setSubTypeForShare:;
- (void)setCostStringForShare:;
- (BOOL)isFromPOITravel;
- (void)setIsFromPOITravel:;
- (id)cpsInfo;
- (void)setCpsInfo:;
- (void)setExtraLogInfo:;
- (id)f_poiID;
- (id)f_poiName;
- (id)f_typeCode;
- (id)f_backendType;
- (id)f_addressInfo;
- (void)setPanelExtraData:;
- (void)setModuelUnique:;
- (BOOL)shouldShowCouponInfoAtCurrentLocation;
- (BOOL)hasCouponByDefault;
- (id)moduelUnique;
- (id)panelExtraData;
- (void)setDistance:;
- (id)productType;
- (id)initWithDictionary:error:;
- (void)setProductType:;
- (id)typeCode;
- (void)setIconLocation:;
- (id)iconLocation;
- (void)setLatitude:;
- (id)popularity;
- (void)_initialize;
- (double)latitude;
- (id)componentSeparator;
- (id)viewCount;
- (void)setLongitude:;
- (id)distance;
- (id)shareInfo;
- (long long)itemCount;
- (double)longitude;
- (id)subType;
- (void).cxx_destruct;
- (double)cost;
- (BOOL)isEqual:;
- (void)setShareInfo:;
- (id)iconImageName;
- (id)addressInfo;
- (void)setItemCount:;
- (long long)iconType;
- (unsigned long long)subtitleType;
- (void)setUserCount:;
- (long long)userCount;
- (void)setViewCount:;
- (void)setIconType:;
- (unsigned long long)detailType;
- (void)setDetailType:;
- (void)setTypeCode:;
- (void)setCost:;
- (id)itemTag;
- (void)setItemTag:;
+ (id)placeholderObjectForSchool;
+ (id)placeholderObjectForEmpty;
+ (id)poiDetailTagsJSONTransformer;
+ (id)poiMapRankEntryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
