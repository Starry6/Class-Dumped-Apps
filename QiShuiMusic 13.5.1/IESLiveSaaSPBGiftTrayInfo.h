@interface IESLiveSaaSPBGiftTrayInfo : GPBMessage
@property (nonatomic) IESLiveSaaSPBText trayDisplayText;
@property (nonatomic) BOOL hasTrayDisplayText;
@property (nonatomic) IESLiveSaaSPBImage trayBaseImg;
@property (nonatomic) BOOL hasTrayBaseImg;
@property (nonatomic) IESLiveSaaSPBImage trayHeadImg;
@property (nonatomic) BOOL hasTrayHeadImg;
@property (nonatomic) IESLiveSaaSPBImage trayRightImg;
@property (nonatomic) BOOL hasTrayRightImg;
@property (nonatomic) q trayLevel;
@property (nonatomic) IESLiveSaaSPBImage trayDynamicImg;
@property (nonatomic) BOOL hasTrayDynamicImg;
@property (nonatomic) NSString traySchemaURL;
@property (nonatomic) NSInteger trayType;
@property (nonatomic) IESLiveSaaSPBImage trayBaseImgV2;
@property (nonatomic) BOOL hasTrayBaseImgV2;
@property (nonatomic) IESLiveSaaSPBImage trayRightImgV2;
@property (nonatomic) BOOL hasTrayRightImgV2;
@property (nonatomic) BOOL useHighLayer;
@property (nonatomic) q duration;
@property (nonatomic) NSString toast;
@property (nonatomic) NSInteger traySlideRate;
@property (nonatomic) q originGiftId;
@property (nonatomic) q buffLevel;
@property (nonatomic) NSString toolbarCardName;
+ (id)descriptor;
@end
