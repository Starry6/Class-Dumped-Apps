@interface AWEOfflineCenterTrackingManager : NSObject
+ (void)modifyParamsDictWithModel:params:context:;
+ (id)videoPlayAspect;
+ (id)videoPlayTimeAspect;
+ (id)videoPlayFinishAspect;
+ (unsigned long long)getNetStatus;
+ (id)bitrateFromModel:;
+ (void)trackModelPlayStartWithModel:;
+ (void)trackModelPlayFailedWithModel:;
+ (void)trackAllVideoClearWithVideoLocalCount:andVideoType:;
+ (void)addDefaultParamsFromModel:toParams:;
+ (id)formatFromModel:;
+ (long long)videoTypeWithAwemeModel:;
+ (id)videoPlayFailedAspect;
+ (void)trackAllVideoClearWithCenterModel:;
+ (void)trackModelDownloadStartWithModel:;
+ (void)trackModelDownloadFailedWithModel:andReason:extraParams:;
+ (void)trackModelDownloadSuccessWithModel:extraParams:;
+ (void)trackStoreFailedWithModel:andReason:andType:;
+ (void)trackDashModelChangeWithModel:status:;
+ (void)trackDownloadWithAwemeModels:enterFrom:;
@end
