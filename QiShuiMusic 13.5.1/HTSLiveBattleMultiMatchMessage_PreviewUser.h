@interface HTSLiveBattleMultiMatchMessage_PreviewUser : IESLivePBBaseMessage
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
+ (id)descriptor;
@end
