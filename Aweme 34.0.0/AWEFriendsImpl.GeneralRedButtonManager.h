@interface AWEFriendsImpl.GeneralRedButtonManager : HTSService
- (void)didFinishLogoutWithUid:;
- (BOOL)isCurrentGeneralButtonTypeInHighPriorityList:;
- (BOOL)isCurrentGeneralButtonTypeInActivityWhiteList:;
- (BOOL)isGeneralButtonHasExitedWithModel:buttonType:;
- (void)markGeneralButtonExitWithModel:buttonType:;
- (void)markGeneralButtonNotExitWithModel:buttonType:;
- (void)showGeneralButtonEcommercePostActivityInnerPush:;
- (void)updateGeneralRedButtonActionBlockIfNeededWithModel:enterFrom:;
- (void)addActivityNameTrackParamsTo:forAweme:;
- (void)addButtonEntranceParamsTo:forAweme:isClick:;
- (void)addVideoPlayTrackParamsTo:forAweme:;
- (void)addActivityNameTrackParamsTo:forShootEnterFrom:;
- (id)init;
- (void).cxx_destruct;
@end
