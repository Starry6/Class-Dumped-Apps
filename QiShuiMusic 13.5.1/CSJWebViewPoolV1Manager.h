@interface CSJWebViewPoolV1Manager : CSJWebViewPoolManager
- (long long)maxCount;
+ (id)sharedInstance;
@end
