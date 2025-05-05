@interface HTSLiveGameUser : IESLivePBBaseMessage
@property (nonatomic) NSString userId;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveGameImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) NSString secUserId;
+ (id)descriptor;
@end
