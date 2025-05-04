@interface AWEPayInnerEventPushProxy : NSObject
@property (nonatomic) @ proxyTarget;
@property (nonatomic) @? callback;
- (void)setCallback:;
- (id)callback;
- (void).cxx_destruct;
- (void)setProxyTarget:;
- (id)proxyTarget;
+ (id)proxyWithTarget:callback:;
@end
