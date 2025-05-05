@interface IESLiveVoiceMsgSendPanelView : IESLiveVoiceCommonPanelView
- (void)recordBtnCancel;
- (void)addBackgroundAnimation;
- (void)animationChangeOpacity:hide:;
- (void)changeGroupOpacityIsEnd:;
- (void)recordBtnDown;
- (void)recordBtnMoveInside;
- (void)recordBtnMoveOutside;
- (void)recordBtnUpInside;
- (void)recordBtnUpOutside;
- (void)recordDone;
- (void)removeBackgroundAnimation;
- (void)setupViewModel;
- (void)showTipView;
- (void)updateRecordBtnLayout;
- (id)initWithViewModel:;
@end
