@interface HTSLiveLinkerSwitchChannelCancelContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkerCancelContent content;
@property (nonatomic) BOOL hasContent;
+ (id)descriptor;
@end
