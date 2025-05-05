@interface IESLivePublicAreaHoverMessageStrategy : IESLiveMessageNodeStrategy
- (BOOL)doFilterForMessageList:;
- (id)innerViewSizeWithMaxLayoutWidth:node:;
- (BOOL)needHandleAttributedStringForMessage:;
- (void)updateNode:withMessage:;
- (void)updateNodeOnCreated:;
@end
