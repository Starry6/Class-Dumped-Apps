@interface HTSLiveBadgeConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage badgeImage;
@property (nonatomic) BOOL hasBadgeImage;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveBgColor bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (nonatomic) HTSLiveImage bgIcon;
@property (nonatomic) BOOL hasBgIcon;
+ (id)descriptor;
@end
