@interface AWEVideoMergeHelper : NSObject
+ (void)updateParamModuleWithSize:;
+ (void)resetParamModule;
+ (void)videoComposeStartTrack:editService:;
+ (void)mergeSpeedTrackWithStatus:interval:fileSize:;
+ (long long)getFileSize:error:;
@end
