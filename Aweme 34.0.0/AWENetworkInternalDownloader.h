@interface AWENetworkInternalDownloader : NSObject
- (void)downloadWithRequest:;
+ (id)sharedInstance;
@end
