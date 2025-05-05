@interface HTSLiveLinkerSwitchChannelReplyContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkerReplyContent content;
@property (nonatomic) BOOL hasContent;
+ (id)descriptor;
@end
