@interface AWEIMSkylightFlashBackViewModel : AWEIMSkylightBizViewModel
- (void)willDisplayCellWithCanRecordShowTimes:;
- (void)invokeSelectActionWithCompletion:;
- (BOOL)shouldMoveBackToday;
- (BOOL)checkEnableTransferToSchema:;
- (void)transferToFlashBackDetailWithBizModel:;
+ (id)p_countRuleWithVMType:;
@end
