@interface IESLiveFollowInfo : IESLivePBBaseMessage
@property (nonatomic) q followingCount;
@property (nonatomic) BOOL followingCountEnable;
@property (nonatomic) q followerCount;
@property (nonatomic) BOOL followerCountEnable;
@property (nonatomic) BOOL followerListEnable;
@property (nonatomic) q followStatus;
@property (nonatomic) NSMutableArray accountsArray;
@property (nonatomic) Q accountsArray_Count;
@property (nonatomic) q mutualFollowCount;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSString followerCountStr;
@property (nonatomic) NSString followingCountStr;
@property (nonatomic) BOOL invalidFollowStatus;
- (BOOL)isFollow;
- (BOOL)isFollowed;
+ (id)descriptor;
@end
