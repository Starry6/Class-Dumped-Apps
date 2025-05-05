@interface BDXWebOnlyContext : BDXSubContext
@property (nonatomic) BOOL disableJSBridgeBroadcastNotification;
@property (nonatomic) @? customGlobalPropsScriptBlock;
@property (nonatomic) @? webInterceptorBlock;
@property (nonatomic) BOOL enableTTNet;
@property (nonatomic) @? enableTTNetWithURL;
- (void)setEnableTTNet:;
- (id)customGlobalPropsScriptBlock;
- (BOOL)disableJSBridgeBroadcastNotification;
- (BOOL)enableTTNet;
- (id)enableTTNetWithURL;
- (void)mergeContext:shouldOverride:;
- (void)setCustomGlobalPropsScriptBlock:;
- (void)setDisableJSBridgeBroadcastNotification:;
- (void)setEnableTTNetWithURL:;
- (void)setWebInterceptorBlock:;
- (id)webInterceptorBlock;
- (void).cxx_destruct;
@end
