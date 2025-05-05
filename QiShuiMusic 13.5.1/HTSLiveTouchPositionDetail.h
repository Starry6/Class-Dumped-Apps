@interface HTSLiveTouchPositionDetail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGiftPanelTopDetail giftPanelTopDetail;
@property (nonatomic) BOOL hasGiftPanelTopDetail;
@property (nonatomic) HTSLiveDiamondListBannerDetail diamondListBannerDetail;
@property (nonatomic) BOOL hasDiamondListBannerDetail;
@property (nonatomic) HTSLiveCommonDetail commonDetail;
@property (nonatomic) BOOL hasCommonDetail;
@property (nonatomic) HTSLiveBannerDetail bannerDetail;
@property (nonatomic) BOOL hasBannerDetail;
@property (nonatomic) HTSLiveGiftPanelEntranceDetail giftPanelEntranceDetail;
@property (nonatomic) BOOL hasGiftPanelEntranceDetail;
+ (id)descriptor;
@end
