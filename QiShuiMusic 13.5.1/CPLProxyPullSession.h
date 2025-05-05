@interface CPLProxyPullSession : CPLProxySession
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getChangeBatchWithCompletionHandler:;
- (void)acknowledgeChangeBatch:withCompletionHandler:;
+ (void)beginSessionForProxy:knownVersion:context:completionHandler:;
@end
