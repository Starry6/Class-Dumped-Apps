@interface AWENearbyResourceUtils : NSObject
+ (id)addExtraTrackParams:;
+ (id)getResourceSceneAndStyleWithModel:;
+ (void)creatDialogModelWithResponse:isFromTask:pageType:completion:;
+ (BOOL)handleContainerModelAvoidType:;
+ (void)preCheckShowDialogContainer:isCurrentTabAppear:isFromTask:pageType:completion:;
+ (BOOL)isDrawCouponOuter;
+ (void)updateOuterDrawCouponSuccess:;
+ (id)getOuterDrawCouponSuccess;
+ (BOOL)isDialogAsyncLoadBg;
+ (BOOL)shouldWaitOtherRequestResponse:;
+ (BOOL)handleResponseModelAvoidType:;
+ (void)getDialogModelWithResponse:model:pageType:completion:;
+ (id)handleContentURLWithModel:isContainerVisible:extraParam:;
+ (id)getDialogContentURLWithCommonData:openSessionID:pageType:;
+ (BOOL)getResourceStyleIsCommonDialogWithModel:;
+ (BOOL)getResourceStyleIsBottomBarWithModel:;
@end
