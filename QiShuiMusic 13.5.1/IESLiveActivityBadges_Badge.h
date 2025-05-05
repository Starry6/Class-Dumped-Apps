@interface IESLiveActivityBadges_Badge : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString rewardDate;
@property (nonatomic) NSString expireDate;
@property (nonatomic) NSString description_p;
@property (nonatomic) NSString name;
@property (nonatomic) IESLiveActivityBadges_GradientColor bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (nonatomic) HTSLiveImage bgIcon;
@property (nonatomic) BOOL hasBgIcon;
+ (id)descriptor;
@end
