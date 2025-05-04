@interface AWEVideoMergeProcessData : NSObject
+ (id)createProcessDataWithPublishModel:;
+ (void)configLivePlaybackWaterMark:publishModel:preview:;
+ (id)createProcessDataWithPublishModel:stageScene:;
+ (BOOL)useNewMudule:;
+ (BOOL)isLivePhotoMode:;
@end
