@interface IESECSKUDetailContext : IESECContext
@property (nonatomic) IESECSKUParamsModel paramsModel;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isGotoNativeOrderPage;
@property (nonatomic) NSDictionary schemaNewParams;
@property (nonatomic) q sceneType;
@property (nonatomic) q actionType;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSString promotionId;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString combinationId;
@property (nonatomic) NSString authorId;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSNumber buttonType;
@property (nonatomic) NSString addrId;
@property (nonatomic) NSString shopId;
@property (nonatomic) NSString marketingChannel;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSString channelId;
@property (nonatomic) q channelType;
@property (nonatomic) NSString cpsTrack;
@property (nonatomic) NSDictionary optionRequestParams;
@property (nonatomic) NSString detailURLStr;
@property (nonatomic) BOOL isSKUOptimize;
@property (nonatomic) BOOL specShowImageAndPrice;
@property (nonatomic) NSNumber termCount;
@property (nonatomic) BOOL scrollToInstallment;
@property (nonatomic) IESECGoodsPOIModel poiInfo;
@property (nonatomic) NSString selectedCarId;
@property (nonatomic) NSString nGroupToken;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) NSString adEnterFrom;
@property (nonatomic) NSString ADCID;
@property (nonatomic) NSString ADLogExtra;
@property (nonatomic) NSDictionary ADExtraData;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSString sourceBTMToken;
@property (nonatomic) BOOL isAddToCart;
@property (nonatomic) BOOL applyCoupon;
@property (nonatomic) BOOL isSubscribeStock;
@property (nonatomic) BOOL isTradeIn;
@property (nonatomic) NSNumber heightPercent;
@property (nonatomic) NSString maskBackgroundColor;
@property (nonatomic) NSString bizCampaignType;
@property (nonatomic) NSString hotSaleSkuId;
@property (nonatomic) NSNumber hotSaleType;
@property (nonatomic) NSString skuID;
@property (nonatomic) NSString selectedSkuID;
@property (nonatomic) NSMutableArray selectedIds;
@property (nonatomic) q selectedCount;
@property (nonatomic) BOOL disableServerDefaultSelect;
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) IESECSKUModel skuModel;
@property (nonatomic) IESECDurationHelper renderDurationHelper;
@property (nonatomic) IESECQualityInfoV2 qualityInfo;
@property (nonatomic) BOOL buyNowPreRenderHandled;
@property (nonatomic) BOOL triggerBuyNowPreRenderOnceAfterSelectSKU;
@property (nonatomic) NSString buyNowPreRenderCacheKey;
@property (nonatomic) NSString SKUSessionID;
@property (nonatomic) BOOL fromNative;
@property (nonatomic) <IESECSKUViewDelegate> skuDelegate;
@property (nonatomic) <IESECSKUViewDelegate> skuSchemaDelegate;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} showFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ADExtraData;
- (void)setAdEnterFrom:;
- (void)setApplyCoupon:;
- (void)setExtraParams:;
- (void)setIsAddToCart:;
- (void)setNGroupToken:;
- (void)setPromotionId:;
- (void)setSelectedIds:;
- (void)setSkuDelegate:;
- (void)setTrackParams:;
- (id)ADCID;
- (id)ADLogExtra;
- (id)SKUSessionID;
- (id)bizCampaignType;
- (id)poiInfo;
- (id)schemaNewParams;
- (void)setADExtraData:;
- (void)setHotSaleType:;
- (void)setParamsModel:;
- (void)setQualityInfo:;
- (void)trackWithEventName:extraParams:;
- (id)adEnterFrom;
- (id)addrId;
- (id)appendBCMParams:responder:;
- (BOOL)applyCoupon;
- (id)buyNowPreRenderCacheKey;
- (BOOL)buyNowPreRenderHandled;
- (id)combinationId;
- (id)cpsTrack;
- (id)curSKUInfo;
- (id)detailURLStr;
- (BOOL)disableServerDefaultSelect;
- (id)enterFrom;
- (id)extraParams;
- (BOOL)fromNative;
- (id)generateLiveEventName:;
- (id)hotSaleSkuId;
- (id)hotSaleType;
- (id)initWithParamsModel:;
- (BOOL)isAddToCart;
- (BOOL)isFromLive;
- (BOOL)isGotoNativeOrderPage;
- (BOOL)isSKUOptimize;
- (BOOL)isSubscribeStock;
- (BOOL)isTradeIn;
- (id)marketingChannel;
- (id)maskBackgroundColor;
- (id)nGroupToken;
- (id)optionRequestParams;
- (id)p_enterFromStr;
- (id)p_skuFromStr;
- (void)p_trackClickAddToCart:view:;
- (void)p_trackNoRemindClick:;
- (void)p_trackSKUShouldOpen;
- (void)p_trackSKUShowWithStatus:;
- (void)p_trackShowAddToCart:view:;
- (id)paramsModel;
- (id)promotionId;
- (id)qualityInfo;
- (id)renderDurationHelper;
- (id)roomId;
- (BOOL)scrollToInstallment;
- (id)selectedCarId;
- (id)selectedIds;
- (id)selectedSkuID;
- (void)setADCID:;
- (void)setADLogExtra:;
- (void)setAddrId:;
- (void)setBizCampaignType:;
- (void)setBuyNowPreRenderHandled:;
- (void)setCombinationId:;
- (void)setCpsTrack:;
- (void)setCreativeID:;
- (void)setDetailURLStr:;
- (void)setDisableServerDefaultSelect:;
- (void)setEnterFrom:;
- (void)setFromNative:;
- (void)setHotSaleSkuId:;
- (void)setIsGotoNativeOrderPage:;
- (void)setIsSubscribeStock:;
- (void)setIsTradeIn:;
- (void)setMarketingChannel:;
- (void)setMaskBackgroundColor:;
- (void)setOptionRequestParams:;
- (void)setPoiInfo:;
- (void)setRenderDurationHelper:;
- (void)setRoomId:;
- (void)setSKUSessionID:;
- (void)setSchemaNewParams:;
- (void)setScrollToInstallment:;
- (void)setSelectedCarId:;
- (void)setSelectedSkuID:;
- (void)setShopId:;
- (void)setShowFrame:;
- (void)setSkuID:;
- (void)setSkuModel:;
- (void)setSkuSchemaDelegate:;
- (void)setSourceBTMToken:;
- (void)setTermCount:;
- (void)setTriggerBuyNowPreRenderOnceAfterSelectSKU:;
- (id)shopId;
- (id)showFrame;
- (id)skuDelegate;
- (id)skuID;
- (id)skuModel;
- (void)skuModuleClick:extra:;
- (void)skuModuleShow:extra:once:;
- (id)skuSchemaDelegate;
- (id)sourceBTMToken;
- (BOOL)specShowImageAndPrice;
- (id)trackParams;
- (void)trackWithEventName:adLabel:adRefer:extraParams:bcmPage:;
- (void)trackWithEventName:adLabel:extraParams:bcmPage:;
- (void)trackWithEventName:extraParams:bcmPage:;
- (void)trackWithEventName:extraParams:bcmPage:once:;
- (void)trackWithEventName:extraParams:bcmPage:once:btmID:;
- (void)trackWithEventName:extraParams:once:;
- (void)triggerBuyNowPreRenderAfterSelectSKUIfNeeded:;
- (BOOL)triggerBuyNowPreRenderOnceAfterSelectSKU;
- (void)updateSelectCountLimitWithSKUModel:;
- (void)updateSpecsWithSelectedIds:needAutoSelect:;
- (void)updateTrackerBaseParams:;
- (void)setTracker:;
- (long long)actionType;
- (id)tracker;
- (void)setButtonType:;
- (void)setActionType:;
- (id)productId;
- (id)itemID;
- (id)identifier;
- (void)setSelectedCount:;
- (void)setItemID:;
- (void).cxx_destruct;
- (long long)selectedCount;
- (long long)channelType;
- (void)setIdentifier:;
- (id)buttonType;
- (long long)sceneType;
- (void)setSceneType:;
- (void)setProductId:;
- (id)channelId;
- (void)setChannelId:;
- (id)termCount;
- (void)setChannelType:;
- (id)creativeID;
- (void)setPageName:;
- (id)pageName;
- (id)heightPercent;
- (void)setHeightPercent:;
- (id)authorId;
- (void)setAuthorId:;
@end
