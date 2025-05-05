@interface HTSLiveAvatarBorderConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage avatarBorder;
@property (nonatomic) BOOL hasAvatarBorder;
@property (nonatomic) HTSLiveImage thumbAvatarBorder;
@property (nonatomic) BOOL hasThumbAvatarBorder;
+ (id)descriptor;
@end
