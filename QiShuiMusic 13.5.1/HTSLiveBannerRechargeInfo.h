@interface HTSLiveBannerRechargeInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger bannerType;
@property (nonatomic) NSString bannerTopDescText;
@property (nonatomic) NSString bannerBottomDescText;
@property (nonatomic) NSString bannerBottomDescColor;
@property (nonatomic) NSString bannerIconImg;
@property (nonatomic) NSString bannerBgImg;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) q currentCnt;
@property (nonatomic) q totalProgress;
@property (nonatomic) NSString progressBgColor;
@property (nonatomic) NSString progressIndicatorColor;
@property (nonatomic) q validEndTime;
@property (nonatomic) NSString bannerGuideDescImg;
@property (nonatomic) q bannerId;
@property (nonatomic) NSString bannerTopDescColor;
@property (nonatomic) BOOL screenShield;
+ (id)descriptor;
@end
