@interface IESLiveSaaSPBTabItem : GPBMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger style;
@property (nonatomic) q diamondCount;
@property (nonatomic) IESLiveSaaSPBImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) IESLiveSaaSPBImage landscapeImg;
@property (nonatomic) BOOL hasLandscapeImg;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString commentToast;
@property (nonatomic) IESLiveSaaSPBImage entranceImg;
@property (nonatomic) BOOL hasEntranceImg;
@property (nonatomic) IESLiveSaaSPBImage imgV2;
@property (nonatomic) BOOL hasImgV2;
@property (nonatomic) IESLiveSaaSPBImage landscapeImgV2;
@property (nonatomic) BOOL hasLandscapeImgV2;
+ (id)descriptor;
@end
