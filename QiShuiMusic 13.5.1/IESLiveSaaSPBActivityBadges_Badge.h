@interface IESLiveSaaSPBActivityBadges_Badge : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString rewardDate;
@property (nonatomic) NSString expireDate;
@property (nonatomic) NSString description_p;
@property (nonatomic) NSString name;
@property (nonatomic) IESLiveSaaSPBActivityBadges_GradientColor bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (nonatomic) IESLiveSaaSPBImage bgIcon;
@property (nonatomic) BOOL hasBgIcon;
+ (id)descriptor;
@end
