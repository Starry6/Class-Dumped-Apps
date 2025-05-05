@interface IESLiveMemberMessageStrategy : IESLiveMessageNodeStrategy
@property (nonatomic) double lastMessageTime;
- (double)lastMessageTime;
- (BOOL)doFilterForMessageList:;
- (BOOL)isOwnersMessage:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (BOOL)needFoldForMessage:;
- (void)setLastMessageTime:;
- (void)updateNodeOnCreated:;
- (id)contentString;
@end
