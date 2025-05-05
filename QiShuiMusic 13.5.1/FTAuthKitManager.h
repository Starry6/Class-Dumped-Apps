@interface FTAuthKitManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)anisetteHeadersForRequest:completionBlockQueue:completionBlock:;
- (void)handleResponse:forRequest:completionBlock:;
+ (id)sharedInstance;
@end
