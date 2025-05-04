@interface AWELivePhotoGenerator : NSObject
+ (id)getLivePhotoURL:;
+ (id)getOutputPath;
+ (void)loadMediaWithPath:withProgress:withCompletion:;
@end
