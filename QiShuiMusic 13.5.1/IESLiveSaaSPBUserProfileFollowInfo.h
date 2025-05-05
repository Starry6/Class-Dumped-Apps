@interface IESLiveSaaSPBUserProfileFollowInfo : GPBMessage
@property (nonatomic) q followingCount;
@property (nonatomic) BOOL followingCountEnable;
@property (nonatomic) q followerCount;
@property (nonatomic) BOOL followerCountEnable;
@property (nonatomic) BOOL followerListEnable;
@property (nonatomic) q followStatus;
@property (nonatomic) q mutualFollowCount;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSString followerCountStr;
@property (nonatomic) NSString followingCountStr;
+ (id)descriptor;
@end
