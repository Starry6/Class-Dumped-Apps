@interface AWELiveShelfCellViewModel : NSObject
@property (nonatomic) BOOL isCache;
@property (nonatomic) Q actionType;
@property (nonatomic) BOOL isLocationEnabled;
@property (nonatomic) NSDictionary lynxTrackInfo;
@property (nonatomic) NSDictionary roomData4Lynx;
@property (nonatomic) NSString shelfId;
@property (nonatomic) NSString roomUniqueKey;
@property (nonatomic) NSDictionary lynxCommonData;
@property (nonatomic) BOOL shouldShowPoiInfo;
@property (nonatomic) BOOL isExplaining;
@property (nonatomic) BOOL isPinkBackground;
@property (nonatomic) Q status;
@property (nonatomic) Q flashStatus;
@property (nonatomic) BOOL hasValidTicket;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableAttributedString attributedTitle;
@property (nonatomic) NSString tagUrl;
@property (nonatomic) YYWebImageOperation tagRequestOperation;
@property (nonatomic) NSString salePoint;
@property (nonatomic) NSString actionBtnTitle;
@property (nonatomic) NSString pricePrefixText;
@property (nonatomic) BOOL isSupportBuy;
@property (nonatomic) NSString clickBuyToastText;
@property (nonatomic) BOOL showSalesLabel;
@property (nonatomic) NSString salesStr;
@property (nonatomic) double serverTime;
@property (nonatomic) q productType;
@property (nonatomic) NSString iconUrlStr;
@property (nonatomic) NSArray iconUrlList;
@property (nonatomic) NSString NumberStr;
@property (nonatomic) NSString imageTagUrlStr;
@property (nonatomic) NSString poiCity;
@property (nonatomic) q cityNumber;
@property (nonatomic) NSString poiDistance;
@property (nonatomic) NSString poiShopTitle;
@property (nonatomic) q shopCount;
@property (nonatomic) NSString deliveryTime;
@property (nonatomic) NSString deliveryText;
@property (nonatomic) NSString distanceInfoType;
@property (nonatomic) NSArray ticketList;
@property (nonatomic) NSArray rightList;
@property (nonatomic) NSMutableArray ticketRightList;
@property (nonatomic) AWELifeShelfCardListItemBrandLabel brandLabel;
@property (nonatomic) AWELifeShelfCardListItemCardDataFlashSale flashSale;
@property (nonatomic) AWELiveShelfPriceModel priceModel;
@property (nonatomic) double stock;
@property (nonatomic) NSNumber pageType;
@property (nonatomic) q tabId;
@property (nonatomic) BOOL needUpdateTitle;
@property (nonatomic) BOOL needConfigNativeData;
@property (nonatomic) AWEPageContext context;
@property (nonatomic) Q cellType;
@property (nonatomic) BOOL isTopItem;
@property (nonatomic) NSNumber liveRoomType;
@property (nonatomic) @? refreshTitleCallback;
@property (nonatomic) AWELifeShelfCardListItem originModel;
@property (nonatomic) NSString cardId;
@property (nonatomic) NSString serviceTagJsonStr;
@property (nonatomic) NSDictionary lynxCardData;
@property (nonatomic) NSDictionary gaiaXCardData;
- (void)setServerTime:;
- (id)liveRoomType;
- (void)setLiveRoomType:;
- (id)rightList;
- (void)setRightList:;
- (void)setBrandLabel:;
- (id)brandLabel;
- (long long)shopCount;
- (void)setShopCount:;
- (void)setIconUrlList:;
- (id)iconUrlList;
- (void)setDeliveryTime:;
- (id)deliveryTime;
- (id)deliveryText;
- (void)setDeliveryText:;
- (id)originModel;
- (void)setOriginModel:;
- (void)setActionBtnTitle:;
- (id)actionBtnTitle;
- (void)setRoomUniqueKey:;
- (id)roomUniqueKey;
- (id)poiDistance;
- (void)setPoiDistance:;
- (id)distanceInfoType;
- (void)setDistanceInfoType:;
- (BOOL)isSupportBuy;
- (void)setIsSupportBuy:;
- (id)lynxCommonData;
- (id)tagUrl;
- (void)setTagUrl:;
- (id)pricePrefixText;
- (void)setPricePrefixText:;
- (void)setLynxCommonData:;
- (void)setPoiCity:;
- (id)poiCity;
- (id)gaiaXCardData;
- (void)setGaiaXCardData:;
- (id)roomData4Lynx;
- (id)lynxTrackInfo;
- (id)shelfId;
- (void)setLynxTrackInfo:;
- (void)setShelfId:;
- (void)setRoomData4Lynx:;
- (void)setIsLocationEnabled:;
- (void)setShouldShowPoiInfo:;
- (void)setIsTopItem:;
- (id)flashSale;
- (void)setFlashSale:;
- (id)_formatPriceStrWithPrice:;
- (void)setFlashStatus:;
- (unsigned long long)flashStatus;
- (BOOL)_hasTicketWithItem:;
- (void)setHasValidTicket:;
- (id)salePoint;
- (void)setSalePoint:;
- (void)setClickBuyToastText:;
- (void)setSalesStr:;
- (void)setNumberStr:;
- (void)setImageTagUrlStr:;
- (void)setIsExplaining:;
- (BOOL)isExplaining;
- (void)setIsPinkBackground:;
- (void)setCityNumber:;
- (void)setPoiShopTitle:;
- (void)setTicketList:;
- (void)setNeedUpdateTitle:;
- (void)setNeedConfigNativeData:;
- (void)configNativeModelData;
- (BOOL)needConfigNativeData;
- (BOOL)hasValidTicket;
- (id)_createPriceModelWithItem:hasTicket:flashStautus:;
- (void)setPriceModel:;
- (BOOL)needUpdateTitle;
- (void)dealWithAttributedTitle;
- (void)dealWithInfoDisplay;
- (id)tagRequestOperation;
- (BOOL)showSalesLabel;
- (BOOL)showCouponContainerForSingleStore;
- (double)getWithoutImageContentWidth;
- (double)getSalesAreaWidth;
- (void)setShowSalesLabel:;
- (id)refreshTitleCallback;
- (void)setTagRequestOperation:;
- (id)salesStr;
- (BOOL)shouldShowPoiInfo;
- (void)dealWithTicketRightListWithContentRemainWidth:needDealSalesLabel:salesAreaWidth:;
- (BOOL)showSeckill;
- (id)ticketRightList;
- (void)setTicketRightList:;
- (id)ticketList;
- (double)dealWithTicketRightListWithitem:itemViewWidth:needDealSalesLabel:salesAreaWidth:contentRemainWidth:;
- (BOOL)isTopItem;
- (BOOL)isLocationEnabled;
- (double)DSLCellHeight;
- (void)configWithShelfModel:cardModel:isTopItem:showPoiInfo:pageType:tabId:actionType:;
- (void)setServiceTagJsonStr:;
- (void)cleanExplainingStyle;
- (id)lynxCardData;
- (void)updateExplainAtmosphereFromMessage:;
- (id)cellClassIdStr;
- (double)getTitleRealHeight;
- (BOOL)showSalePoint;
- (long long)numberOfLinesOfTitle;
- (BOOL)showDeliveryLabel;
- (BOOL)isPinkBackground;
- (void)setRefreshTitleCallback:;
- (id)clickBuyToastText;
- (id)NumberStr;
- (id)imageTagUrlStr;
- (long long)cityNumber;
- (id)poiShopTitle;
- (id)priceModel;
- (id)serviceTagJsonStr;
- (id)iconUrlStr;
- (void)setIconUrlStr:;
- (unsigned long long)actionType;
- (long long)productType;
- (void)setActionType:;
- (void)setProductType:;
- (unsigned long long)cellType;
- (void)setCellType:;
- (void)setStatus:;
- (void)setPageType:;
- (void)setAttributedTitle:;
- (double)serverTime;
- (void)setContext:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)title;
- (id)context;
- (void)setTitle:;
- (id)pageType;
- (id)attributedTitle;
- (id)cardId;
- (double)cellHeight;
- (void)setCardId:;
- (void)setTabId:;
- (long long)tabId;
- (BOOL)isCache;
- (void)setIsCache:;
- (void)setStock:;
- (double)stock;
+ (unsigned long long)flashStatusWithItem:serverTime:;
+ (unsigned long long)itemStatusWithItem:flashStautus:serverTime:;
+ (unsigned long long)soldStateWithItem:serverTime:;
+ (double)crossStripeCellImageSize;
+ (double)commonCellHeight;
+ (double)estimatedCellHeight;
@end
