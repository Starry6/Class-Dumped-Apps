@interface HTSLiveUser_FollowInfo : IESLivePBBaseMessage
@property (nonatomic) q followingCount;
@property (nonatomic) q followerCount;
@property (nonatomic) q followStatus;
@property (nonatomic) q pushStatus;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSString followerCountStr;
@property (nonatomic) NSString followingCountStr;
@property (nonatomic) BOOL invalidFollowStatus;
- (BOOL)isFollow;
- (BOOL)isFollowed;
- (BOOL)isFriend;
+ (id)descriptor;
@end
