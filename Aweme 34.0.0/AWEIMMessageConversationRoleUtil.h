@interface AWEIMMessageConversationRoleUtil : NSObject
+ (void)transferToEnterpriseCertificationPageWithConversation:uid:;
+ (BOOL)isMedicalRoleTestWithConversation:;
+ (id)blueOrYellowVTitleWithUid:;
+ (id)blueTitleWithUid:;
+ (id)yellowTitleWithUid:;
+ (id)getLocalBlueOrYellowVIcon:;
+ (BOOL)isMedicalRoleWithConversation:;
@end
