@interface IESLivePaidLinkmicAPI : HTSLiveApi
- (void)getPaidLinkMicBenefitInfoWithRoomID:completion:;
- (void)getPlayCardInfoWithRoomID:completion:;
- (void)getPlayModeInfoBeforeApplyWithRoomID:completion:;
- (id)paidLinkMicApiRequestByPath:callback:;
- (void)paidLinkmicAddPriceWithParams:completion:;
- (void)paidLinkmicGetAlertInfoWithParams:completion:;
- (void)updatePaidQueueSettingWithRoomID:open:completion:;
@end
