@interface HTSLiveListItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q day;
@property (nonatomic) q expiredTime;
@property (nonatomic) q recentSubscribeTime;
@property (nonatomic) HTSLiveBadge badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) q opType;
@property (nonatomic) q level;
+ (id)descriptor;
@end
