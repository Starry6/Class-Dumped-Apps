@interface HTSLiveCommentRole : IESLivePBBaseMessage
@property (nonatomic) q roleId;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
+ (id)descriptor;
@end
