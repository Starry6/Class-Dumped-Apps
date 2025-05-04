@interface AWEIMFansDeleteNoticeViewModel : AWEIMFansBaseViewModel
@property (nonatomic) NSNumber removingNoticeId;
@property (nonatomic) Q numberOfDeleted;
@property (nonatomic) BOOL isRemovingFansOnAir;
- (void)setIsRemovingFansOnAir:;
- (BOOL)isRemovingFansOnAir;
- (id)removingNoticeId;
- (BOOL)canRemoveModelAtIndexPath:;
- (void)setRemovingNoticeId:;
- (void)revertRemovedModel:atIndexPath:;
- (void)setNumberOfDeleted:;
- (unsigned long long)numberOfDeleted;
- (void)clickDeleteBtn:isFromLongPressAction:;
- (void)clickRemoveFansBtn:enterMethod:;
- (void)p_refuseFollowRequest:indexPath:needShowSnackbar:;
- (void)removeModelAtIndexPath:isFollowRequestRefuse:needReportDelete:;
- (BOOL)canDeleteCell:model:;
- (void)p_showRefuseFollowRequestSnackBar:indexPath:;
- (void)p_reportRefuseFollowRequest:atIndexPath:;
- (void)requestFollowRequestRefuse:trackParams:;
- (void)p_showRemoveFansSnackbar:notiModel:enterMethod:;
- (void)requestDeleteNotice:noticeId:;
- (void)requestRemoveFollowerWithUserId:completion:;
- (void)p_updateUnreadCountWhenDeleteRowAtIndexPath:;
- (void)removeModelAtIndexPath:isFollowRequestRefuse:;
- (id)init;
- (void).cxx_destruct;
@end
