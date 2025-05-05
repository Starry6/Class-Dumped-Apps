@interface IESLiveSaaSPBUser_FollowInfo : GPBMessage
@property (nonatomic) q followingCount;
@property (nonatomic) q followerCount;
@property (nonatomic) q followStatus;
@property (nonatomic) q pushStatus;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSString followerCountStr;
@property (nonatomic) NSString followingCountStr;
@property (nonatomic) BOOL invalidFollowStatus;
+ (id)descriptor;
@end
