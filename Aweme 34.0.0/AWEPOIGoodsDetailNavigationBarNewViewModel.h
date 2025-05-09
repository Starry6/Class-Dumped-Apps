@interface AWEPOIGoodsDetailNavigationBarNewViewModel : DitoComponentViewModel
@property (nonatomic) AWEPOIGoodsDetailCollectObject collectObj;
@property (nonatomic) NSString collectPopUrl;
@property (nonatomic) NSDictionary diamondEduSchema;
@property (nonatomic) BOOL hasGrouponTab;
@property (nonatomic) BOOL hasDiamondEntry;
@property (nonatomic) BOOL adjustHeight;
@property (nonatomic) BOOL hasItemData;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL needShowCollectView;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL didCollectActionSucceed;
@property (nonatomic) NSString collectBubbleText;
@property (nonatomic) NSString collectBubbleLinkText;
@property (nonatomic) NSString shareTitle;
@property (nonatomic) NSString shareImageUrl;
@property (nonatomic) NSString shareUrl;
@property (nonatomic) NSString shareDesc;
@property (nonatomic) NSString qrcodeShareInfo;
@property (nonatomic) NSString commandShareParams;
@property (nonatomic) NSString innerUrl;
@property (nonatomic) NSString reportUrl;
@property (nonatomic) AWEPOIGoodsDetailNavigationBarUIModel startState;
@property (nonatomic) AWEPOIGoodsDetailNavigationBarUIModel endState;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) q aweType;
@property (nonatomic) NSDictionary imExtra;
@property (nonatomic) NSNumber contentYOffset;
@property (nonatomic) NSDictionary lifeShareExt;
@property (nonatomic) NSDictionary searchTrackParams;
@property (nonatomic) BOOL isShowShareBtn;
@property (nonatomic) BOOL isShowSearchBtn;
@property (nonatomic) NSString searchEntryStyle;
@property (nonatomic) BOOL showSearchBtnInX;
@property (nonatomic) NSString searchSchemaPrefix;
@property (nonatomic) BOOL isShowElevator;
@property (nonatomic) BOOL forceBottomElevator;
@property (nonatomic) BOOL needShowDynamicView;
@property (nonatomic) double dynamicViewHeight;
@property (nonatomic) NSDictionary multiSkuInfo;
@property (nonatomic) BOOL tabMode;
@property (nonatomic) NSString multiSkuTabUrl;
@property (nonatomic) NSNumber customComponentHeight;
@property (nonatomic) AWEPOIGoodsDetailMarketingShareInfoModel marketingShareInfo;
@property (nonatomic) AWEPOIGoodsDetailShareCouponBubbleModel shareBubbleInfo;
@property (nonatomic) AWEPOIGoodsDetailShareCouponTagModel shareTagInfo;
@property (nonatomic) NSDictionary sharePanelRequestParams;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (long long)aweType;
- (void)setShareDesc:;
- (void)setShareTitle:;
- (void)setLifeShareExt:;
- (void)setShareUrl:;
- (id)shareDesc;
- (id)shareUrl;
- (id)lifeShareExt;
- (id)innerUrl;
- (void)setInnerUrl:;
- (id)imExtra;
- (void)setImExtra:;
- (id)searchTrackParams;
- (void)setSearchTrackParams:;
- (id)reportUrl;
- (void)setAweType:;
- (void)setReportUrl:;
- (BOOL)adjustHeight;
- (BOOL)hasGrouponTab;
- (id)componentSizeWithMaxWidth:;
- (void)pageView:didScroll:;
- (void)didEndReload;
- (id)contentYOffset;
- (void)setContentYOffset:;
- (id)searchEntryStyle;
- (id)searchSchemaPrefix;
- (void)setSearchSchemaPrefix:;
- (double)startShowElevatorOffset;
- (void)setStartShowElevatorOffset:;
- (double)elevatorVisibleOffset;
- (void)setElevatorVisibleOffset:;
- (void)setIsShowElevator:;
- (BOOL)isShowElevator;
- (BOOL)isShowShareBtn;
- (void)setIsShowShareBtn:;
- (BOOL)isShowSearchBtn;
- (void)setIsShowSearchBtn:;
- (BOOL)showSearchBtnInX;
- (BOOL)needShowCollectView;
- (BOOL)needShowDynamicView;
- (double)dynamicViewHeight;
- (BOOL)forceBottomElevator;
- (id)customComponentHeight;
- (id)multiSkuInfo;
- (BOOL)tabMode;
- (id)multiSkuTabUrl;
- (BOOL)didCollectActionSucceed;
- (BOOL)shouldShowCollectEduPopup;
- (void)showCollectEduPopup;
- (void)setCustomComponentHeight:;
- (id)marketingShareInfo;
- (void)onCollectIconTapped;
- (id)collectBubbleText;
- (id)collectBubbleLinkText;
- (void)onCollectBubbleTapped;
- (void)onCollectBubbleDisplayed;
- (void)setSearchEntryStyle:;
- (void)setShareImageUrl:;
- (void)setCommandShareParams:;
- (id)parseImExtraWith:;
- (void)setQrcodeShareInfo:;
- (id)commandShareParams;
- (id)shareImageUrl;
- (id)qrcodeShareInfo;
- (id)getFavoriteExtraInfoInSession;
- (id)collectObj;
- (void)setDiamondEduSchema:;
- (void)setHasGrouponTab:;
- (void)setDidCollectActionSucceed:;
- (id)diamondEduSchema;
- (id)collectPopUrl;
- (void)setNeedShowCollectView:;
- (void)setCollectPopUrl:;
- (void)setCollectBubbleText:;
- (void)setCollectBubbleLinkText:;
- (void)setShowSearchBtnInX:;
- (void)setMarketingShareInfo:;
- (void)setShareBubbleInfo:;
- (void)setShareTagInfo:;
- (void)setSharePanelRequestParams:;
- (void)setForceBottomElevator:;
- (void)setAdjustHeight:;
- (void)setHasItemData:;
- (void)setMultiSkuInfo:;
- (void)setTabMode:;
- (void)setMultiSkuTabUrl:;
- (BOOL)needShowElevator;
- (void)setNeedShowDynamicView:;
- (void)setDynamicViewHeight:;
- (id)shareBubbleInfo;
- (id)shareTagInfo;
- (id)sharePanelRequestParams;
- (void)setCollectObj:;
- (BOOL)hasDiamondEntry;
- (void)setHasDiamondEntry:;
- (id)initWithNode:;
- (id)startState;
- (void)parseData:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)endState;
- (void)setEndState:;
- (void)setStartState:;
- (id)shareTitle;
- (BOOL)hasItemData;
@end
