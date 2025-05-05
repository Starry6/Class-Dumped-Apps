@interface NPResolver : NWResolver
@property (nonatomic) @? resolveCompletionHandler;
@property (nonatomic) NSObject<OS_dispatch_source> resolveTimer;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)resolveWithCompletionHandler:;
- (id)resolveCompletionHandler;
- (void)setResolveCompletionHandler:;
- (id)resolveTimer;
- (void)setResolveTimer:;
@end
