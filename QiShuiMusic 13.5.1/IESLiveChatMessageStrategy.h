@interface IESLiveChatMessageStrategy : IESLiveMessageNodeStrategy
@property (nonatomic) Q commentReplyLinkSwitch;
- (void)parseReplyText:;
- (unsigned long long)commentReplyLinkSwitch;
- (BOOL)doFilterForMessageList:;
- (id)innerViewSizeWithMaxLayoutWidth:node:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (id)needLoadOtherImageURLsForMessage:;
- (void)setCommentReplyLinkSwitch:;
- (void)updateNodeOnCreated:;
- (id)init;
- (id)config;
@end
