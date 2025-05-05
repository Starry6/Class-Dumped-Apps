@interface HTSLiveSeriesPlayGift : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGiftStruct giftStruct;
@property (nonatomic) BOOL hasGiftStruct;
@property (nonatomic) HTSLiveSeriesTrayInfo seriesTrayInfo;
@property (nonatomic) BOOL hasSeriesTrayInfo;
@property (nonatomic) HTSLiveSendTogether sendTogether;
@property (nonatomic) BOOL hasSendTogether;
@property (nonatomic) NSString diyItemInfo;
@property (nonatomic) HTSLiveAnchorGiftData anchorGift;
@property (nonatomic) BOOL hasAnchorGift;
@property (nonatomic) HTSLiveAssetEffectMixInfo assetEffectMixInfo;
@property (nonatomic) BOOL hasAssetEffectMixInfo;
+ (id)descriptor;
@end
