@interface IESLiveIMSharedClient : IESLiveIMPaaSUnifiedClient
- (id)commonParams;
- (id)httpParams:;
- (id)websocketParams:;
+ (id)sharedInstance;
@end
