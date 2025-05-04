@interface AWEStudioTrackUtils : NSObject
+ (BOOL)removeMVTrackIfNeeded:;
+ (void)setupRepoImageInfoInstance:imageURL:duration:;
+ (void)updateEditCanvasStateWithPublishModel:;
+ (BOOL)isBrokenVideoDataWithPublishModel:;
+ (void)removeAllVideoAssetIfNeeded:;
+ (BOOL)addMainTrackImage:publishModel:duration:;
+ (BOOL)addMainTrackVideo:publishModel:;
+ (void)switchRepoContextInfo:;
+ (void)setupRepoVideoInfoInstance:;
@end
