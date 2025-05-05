@interface HTSLiveLinkmicInitInfoContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveInitInfoSetting videoChatInitInfo;
@property (nonatomic) BOOL hasVideoChatInitInfo;
+ (id)descriptor;
@end
