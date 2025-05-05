@interface IESLiveItemShareMessageStrategy : IESLiveMessageNodeStrategy
- (id)attachingDIContext;
- (BOOL)doFilterForMessageList:;
- (id)getDisplayText;
- (id)innerViewSizeWithMaxLayoutWidth:node:;
- (id)needLoadOtherImageURLsForMessage:;
- (void)updateNodeOnCreated:;
@end
