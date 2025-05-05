@interface HTSLiveBadgeDetailInfo : IESLivePBBaseMessage
@property (nonatomic) q badgeId;
@property (nonatomic) NSString badgeName;
@property (nonatomic) NSString badgeMainText;
@property (nonatomic) NSString badgeAssistText;
@property (nonatomic) HTSLiveImage badgeImage;
@property (nonatomic) BOOL hasBadgeImage;
@property (nonatomic) HTSLiveImage badgeAnimation;
@property (nonatomic) BOOL hasBadgeAnimation;
@property (nonatomic) HTSLiveImage badgePost;
@property (nonatomic) BOOL hasBadgePost;
+ (id)descriptor;
@end
