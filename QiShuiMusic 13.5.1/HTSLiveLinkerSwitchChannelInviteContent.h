@interface HTSLiveLinkerSwitchChannelInviteContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkerInviteContent content;
@property (nonatomic) BOOL hasContent;
+ (id)descriptor;
@end
