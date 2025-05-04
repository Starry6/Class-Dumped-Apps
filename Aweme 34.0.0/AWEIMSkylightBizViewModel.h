@interface AWEIMSkylightBizViewModel : AWEIMOnlineContactAvatarViewModel
@property (nonatomic) AWEIMSkylightBizInfoDataModel businessModel;
@property (nonatomic) BOOL exitWhenSkylightDisappear;
- (void)setBusinessModel:;
- (id)businessModel;
- (BOOL)canShowRedDot;
- (void)invokeSelectAction;
- (BOOL)exitWhenSkylightDisappear;
- (void)willDisplayCellWithCanRecordShowTimes:;
- (void)invokeSelectActionWithCompletion:;
- (BOOL)shouldMoveBackToday;
- (void)p_transferToBizDetailWithModel:;
- (BOOL)checkEnableTransferToSchema:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
