@interface IESLiveScreenChatMessageStrategy : IESLiveMessageNodeStrategy
- (BOOL)doFilterForMessageList:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (id)needLoadOtherImageURLsForMessage:;
- (void)updateNodeOnCreated:;
- (id)config;
@end
