@interface AWELiveUpdateInnerPushHelper : NSObject
+ (BOOL)liveInnerPushEnableWithBusinessType:;
+ (void)trackLiveInnerPushWithBusiness:tempId:isOld:hitExperiment:;
+ (BOOL)liveEnableTemplatePushTrackFix;
+ (BOOL)getInnerPushPlatformEnable;
+ (id)liveInnerPushBusinessTypeList;
@end
