@interface HTSLiveLinkMicMethod_InvitorInfo : IESLivePBBaseMessage
@property (nonatomic) NSString invitorNickName;
@property (nonatomic) HTSLiveImage invitorAvatar;
@property (nonatomic) BOOL hasInvitorAvatar;
+ (id)descriptor;
@end
