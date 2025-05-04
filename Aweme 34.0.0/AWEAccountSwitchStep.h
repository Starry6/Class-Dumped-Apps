@interface AWEAccountSwitchStep : AWEWorkflowStep
- (void)p_dismissViewControllerCompletion:cancel:diffUid:;
- (void)p_switchToNewUserWithUser:;
- (void)p_strategyConductWithPushUserId:afterManualLogin:multiLogin:;
- (void)p_editConditionAlertShowWithConfirmBlock:cancelBlock:;
- (void)onStep:linkSession:;
@end
