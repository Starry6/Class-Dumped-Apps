@interface IESLiveSocialMessageStrategy : IESLiveMessageNodeStrategy
- (BOOL)doFilterForMessageList:;
- (BOOL)enableFollowMessageFold:;
- (BOOL)enableFollowMessageShowInList:;
- (BOOL)enableMessageFoldForAnchorColdOpt:;
- (BOOL)enableShareMessageFold:;
- (BOOL)enableShareMessageShowInList:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (BOOL)needFoldForMessage:;
- (id)config;
- (id)contentString;
@end
