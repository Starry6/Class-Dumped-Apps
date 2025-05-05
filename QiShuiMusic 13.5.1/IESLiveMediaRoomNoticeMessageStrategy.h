@interface IESLiveMediaRoomNoticeMessageStrategy : IESLiveMessageNodeStrategy
- (BOOL)doFilterForMessageList:;
- (id)innerViewSizeWithMaxLayoutWidth:node:;
- (id)jointAttributedString:;
- (BOOL)needHandleAttributedStringForMessage:;
- (void)updateNode:withMessage:;
- (void)updateNodeOnCreated:;
@end
