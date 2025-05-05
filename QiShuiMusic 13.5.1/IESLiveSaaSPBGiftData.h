@interface IESLiveSaaSPBGiftData : GPBMessage
@property (nonatomic) IESLiveSaaSPBText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString describe;
@property (nonatomic) q giftId;
@property (nonatomic) q groupCount;
@property (nonatomic) q repeatCount;
@property (nonatomic) q comboCount;
@property (nonatomic) q msgId;
@property (nonatomic) IESLiveSaaSPBText trayDisplayText;
@property (nonatomic) BOOL hasTrayDisplayText;
@property (nonatomic) IESLiveSaaSPBGiftBanner giftBanner;
@property (nonatomic) BOOL hasGiftBanner;
@property (nonatomic) IESLiveSaaSPBGiftExtra giftExtra;
@property (nonatomic) BOOL hasGiftExtra;
@property (nonatomic) IESLiveSaaSPBGiftTrayInfo trayInfo;
@property (nonatomic) BOOL hasTrayInfo;
@property (nonatomic) NSString topBarText;
@property (nonatomic) q originGiftId;
@property (nonatomic) NSInteger buffLevel;
+ (id)descriptor;
@end
