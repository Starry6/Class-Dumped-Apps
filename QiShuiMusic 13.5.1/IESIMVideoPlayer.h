@interface IESIMVideoPlayer : NSObject
+ (id)playerWithType:;
+ (id)playerWithType:videoID:andPlayURLs:;
+ (id)playerWithType:videoID:andPlayURLs:videoWrapper:audioWrapper:;
@end
