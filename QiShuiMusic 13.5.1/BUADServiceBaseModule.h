@interface BUADServiceBaseModule : NSObject
@property (nonatomic) NSDictionary bindings;
- (void)bind:toProtocol:;
- (void)bind:toProtocol:name:;
- (void)bindProvider:toProtocol:;
- (void)bindProvider:toProtocol:name:;
- (void)ensureInstance:conformsTo:;
- (void)configure;
- (id)init;
- (void).cxx_destruct;
- (id)bindings;
@end
