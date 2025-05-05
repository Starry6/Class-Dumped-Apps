@interface HTSLiveBannerData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveBannerContainer topRight;
@property (nonatomic) BOOL hasTopRight;
@property (nonatomic) HTSLiveBannerContainer bottomRight;
@property (nonatomic) BOOL hasBottomRight;
@property (nonatomic) HTSLiveBannerContainer giftPanel;
@property (nonatomic) BOOL hasGiftPanel;
@property (nonatomic) HTSLiveBannerContainer middle;
@property (nonatomic) BOOL hasMiddle;
@property (nonatomic) HTSLiveBannerContainer activityTopRight;
@property (nonatomic) BOOL hasActivityTopRight;
@property (nonatomic) HTSLiveBannerContainer topLeft;
@property (nonatomic) BOOL hasTopLeft;
@property (nonatomic) HTSLiveBannerContainer liveScene;
@property (nonatomic) BOOL hasLiveScene;
@property (nonatomic) HTSLiveBannerContainer retainConsult;
@property (nonatomic) BOOL hasRetainConsult;
@property (nonatomic) HTSLiveBannerContainer activityVsInteractive;
@property (nonatomic) BOOL hasActivityVsInteractive;
@property (nonatomic) HTSLiveBannerContainer activityInteractive;
@property (nonatomic) BOOL hasActivityInteractive;
@property (nonatomic) HTSLiveBannerContainer activityVsBottomRight;
@property (nonatomic) BOOL hasActivityVsBottomRight;
+ (id)descriptor;
@end
