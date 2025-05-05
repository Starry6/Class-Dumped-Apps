@interface IESLiveEmojiChatMessageStrategy : IESLiveMessageNodeStrategy
- (BOOL)doFilterForMessageList:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (id)needLoadOtherImageURLsForMessage:;
- (void)updateNodeOnCreated:;
- (id)init;
- (id)config;
@end
