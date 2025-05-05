@interface IESLiveAdventureUserInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) NSString nickName;
@property (nonatomic) q score;
@property (nonatomic) q rank;
@property (nonatomic) BOOL isMvp;
@property (nonatomic) NSInteger userStatus;
@property (nonatomic) q invitedCount;
@property (nonatomic) GPBInt64Array inviteUsersArray;
@property (nonatomic) Q inviteUsersArray_Count;
@property (nonatomic) NSInteger callStatus;
@property (nonatomic) HTSLiveImage newImIconWithLevel;
@property (nonatomic) BOOL hasNewImIconWithLevel;
@property (nonatomic) NSInteger gender;
+ (id)descriptor;
@end
