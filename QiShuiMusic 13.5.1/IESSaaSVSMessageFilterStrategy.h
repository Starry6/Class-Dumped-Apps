@interface IESSaaSVSMessageFilterStrategy : IESLiveSaaSNewMessageFilterStrategy
- (BOOL)_isNotWelcomeRoomMessage:;
- (BOOL)doFilterForMessageList:;
- (BOOL)shouldShowMemberMessage:;
- (BOOL)shouldShowSocialMessage:;
@end
