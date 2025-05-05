@interface CSJWebViewPoolV3Manager : CSJWebViewPoolManager
- (long long)maxCount;
+ (id)sharedInstance;
@end
