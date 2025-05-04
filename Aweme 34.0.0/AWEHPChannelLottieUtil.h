@interface AWEHPChannelLottieUtil : NSObject
+ (id)getLottieWithURL:;
+ (id)findLottieJSONPath:;
+ (void)removeLottieWithURL:;
+ (void)downloadLottieWithURL:completion:fixEnable:;
+ (id)urlToQueue;
@end
