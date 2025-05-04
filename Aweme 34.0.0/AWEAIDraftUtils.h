@interface AWEAIDraftUtils : NSObject
+ (BOOL)saveVidePathToDraftWitPath:toTargetPath:;
+ (void)saveAIDoneDraftWithVideoPath:multiImagePaths:rawImagePaths:coverImagePath:liveVideoPath:liveImagePath:taskModel:draftSyncHandler:completion:;
@end
