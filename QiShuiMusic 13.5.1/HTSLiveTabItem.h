@interface HTSLiveTabItem : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger style;
@property (nonatomic) q diamondCount;
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) HTSLiveImage landscapeImg;
@property (nonatomic) BOOL hasLandscapeImg;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString commentToast;
@property (nonatomic) HTSLiveImage entranceImg;
@property (nonatomic) BOOL hasEntranceImg;
@property (nonatomic) HTSLiveImage imgV2;
@property (nonatomic) BOOL hasImgV2;
@property (nonatomic) HTSLiveImage landscapeImgV2;
@property (nonatomic) BOOL hasLandscapeImgV2;
+ (id)descriptor;
@end
