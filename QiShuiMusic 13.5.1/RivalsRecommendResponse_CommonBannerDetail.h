@interface RivalsRecommendResponse_CommonBannerDetail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString activityStatus;
@property (nonatomic) q selected;
@property (nonatomic) RivalsRecommendResponse_CommonBannerDetail_ButtonInfo buttonInfo;
@property (nonatomic) BOOL hasButtonInfo;
@property (nonatomic) NSString mainTitleColor;
@property (nonatomic) NSString subTitleColor;
@property (nonatomic) HTSLiveImage playIcon;
@property (nonatomic) BOOL hasPlayIcon;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
