@interface HTSLiveScreenChatMessage_Effect : IESLivePBBaseMessage
@property (nonatomic) HTSLiveFlexImageStruct icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveImage avatarIcon;
@property (nonatomic) BOOL hasAvatarIcon;
@property (nonatomic) NSString backgroundColor;
+ (id)descriptor;
@end
