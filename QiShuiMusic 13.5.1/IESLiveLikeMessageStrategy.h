@interface IESLiveLikeMessageStrategy : IESLiveMessageNodeStrategy
@property (nonatomic) double lastMessageTime;
- (double)lastMessageTime;
- (BOOL)doFilterForMessageList:;
- (BOOL)enableRoomDigg;
- (id)getTargetUserId:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (BOOL)needFoldForMessage:;
- (void)setLastMessageTime:;
@end
