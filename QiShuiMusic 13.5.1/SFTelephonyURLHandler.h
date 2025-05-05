@interface SFTelephonyURLHandler : NSObject
@property (nonatomic) NSMutableSet pendingRequests;
- (id)init;
- (void)setPendingRequests:;
- (void).cxx_destruct;
- (id)pendingRequests;
- (BOOL)openURLForDialRequest:withScene:completionHandler:;
- (void)addObserverForRequest:;
- (void)removeObserverForRequest:;
+ (id)sharedInstance;
@end
