@interface HTSLiveGiftExtra : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) HTSLiveSubscribeGiftPackInfo subscribeGiftPackInfo;
@property (nonatomic) BOOL hasSubscribeGiftPackInfo;
@property (nonatomic) NSString bannerGiftInfo;
@property (nonatomic) NSMutableArray giftBuffInfosArray;
@property (nonatomic) Q giftBuffInfosArray_Count;
@property (nonatomic) NSString giftPanelTopDescSchemeURL;
@property (nonatomic) HTSLiveDIYGiftToolbarInfo diyGiftToolbarInfo;
@property (nonatomic) BOOL hasDiyGiftToolbarInfo;
@property (nonatomic) HTSLiveComboHintInfo comboHintInfo;
@property (nonatomic) BOOL hasComboHintInfo;
@property (nonatomic) HTSLiveSeriesGiftsInfo seriesGiftsInfo;
@property (nonatomic) BOOL hasSeriesGiftsInfo;
@property (nonatomic) HTSLiveIconAutoplayAssetInfo iconAutoplayAssetInfo;
@property (nonatomic) BOOL hasIconAutoplayAssetInfo;
@property (nonatomic) HTSLiveGiftMarketingInfo giftMarketingInfo;
@property (nonatomic) BOOL hasGiftMarketingInfo;
@property (nonatomic) NSString metaInfo;
@property (nonatomic) BOOL showComboTray;
+ (id)descriptor;
@end
