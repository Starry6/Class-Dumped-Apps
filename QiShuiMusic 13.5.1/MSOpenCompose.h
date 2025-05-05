@interface MSOpenCompose : MSXPCService
- (id)init;
+ (id)sharedInstance;
+ (void)presentNewMailWithContext:delegateEndpoint:completion:;
@end
