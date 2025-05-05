@interface HTSLiveClubTaskUserInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) NSString userName;
@property (nonatomic) q intimacy;
@property (nonatomic) NSString userId;
@property (nonatomic) q rank;
+ (id)descriptor;
@end
