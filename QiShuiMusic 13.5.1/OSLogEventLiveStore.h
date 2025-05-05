@interface OSLogEventLiveStore : NSObject
- (void)prepareWithCompletionHandler:;
+ (id)liveLocalStore;
@end
