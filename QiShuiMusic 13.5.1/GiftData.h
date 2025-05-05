@interface GiftData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString describe;
@property (nonatomic) q giftId;
@property (nonatomic) q groupCount;
@property (nonatomic) q repeatCount;
@property (nonatomic) q comboCount;
@property (nonatomic) q msgId;
@property (nonatomic) HTSLiveText trayDisplayText;
@property (nonatomic) BOOL hasTrayDisplayText;
@property (nonatomic) HTSLiveGiftBanner giftBanner;
@property (nonatomic) BOOL hasGiftBanner;
@property (nonatomic) HTSLiveGiftExtra giftExtra;
@property (nonatomic) BOOL hasGiftExtra;
@property (nonatomic) HTSLiveGiftTrayInfo trayInfo;
@property (nonatomic) BOOL hasTrayInfo;
@property (nonatomic) NSString topBarText;
@property (nonatomic) HTSLiveAssetEffectMixInfo assetEffectMixInfo;
@property (nonatomic) BOOL hasAssetEffectMixInfo;
@property (nonatomic) q originGiftId;
@property (nonatomic) NSInteger buffLevel;
@property (nonatomic) HTSLiveGiftTip giftTip;
@property (nonatomic) BOOL hasGiftTip;
+ (id)descriptor;
@end
