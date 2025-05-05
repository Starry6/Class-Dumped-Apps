@interface RPAudioMixUtility : NSObject
+ (void)mixAudioForMovie:withCompletionHandler:;
+ (void)mixAudioForMovie:finalMovieURL:withCompletionHandler:;
+ (id)tempFileURL;
@end
