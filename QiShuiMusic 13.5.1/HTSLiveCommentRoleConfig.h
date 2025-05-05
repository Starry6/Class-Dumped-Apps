@interface HTSLiveCommentRoleConfig : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
+ (id)descriptor;
@end
