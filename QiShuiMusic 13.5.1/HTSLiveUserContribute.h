@interface HTSLiveUserContribute : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) q rank;
@property (nonatomic) q score;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
+ (id)descriptor;
@end
