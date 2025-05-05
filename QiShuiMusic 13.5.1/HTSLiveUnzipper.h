@interface HTSLiveUnzipper : NSObject
- (void)unzipResource:toDestination:completion:;
- (void)unzipResource:toDestination:retryCount:completion:;
@end
