@interface IESLiveFansclubMessageStrategy : IESLiveMessageNodeStrategy
- (BOOL)doFilterForMessageList:;
- (BOOL)enableFansClubMessageFold:;
- (BOOL)enableFansClubMessageShowInList:;
- (void)jointAttributedString:withMessage:;
- (id)localContentColor;
- (id)localNameColor;
- (BOOL)needFoldForMessage:;
- (id)config;
@end
