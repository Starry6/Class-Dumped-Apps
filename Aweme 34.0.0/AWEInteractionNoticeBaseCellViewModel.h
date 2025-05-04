@interface AWEInteractionNoticeBaseCellViewModel : AWEBaseListCellViewModel
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)setupWithModel:;
- (void)commentLikeActionWithNoti:;
- (void)handleCommentNoMoreNoticeWithNoti:;
- (void)setupEditConfigs;
- (id)getNotificationInnerMessageTrackerParamsWithAction:;
- (id)getTrackerSlideCellParams;
- (id)getTrackerDisableNoticeParams;
- (id)getDiggCommentParams;
- (id)init;
- (void)dealloc;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
