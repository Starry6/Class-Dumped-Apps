@interface CSJWKURLSchemeTaskHandlerManager : NSObject
@property (nonatomic) NSMutableDictionary handlerDic;
@property (nonatomic) q count;
- (id)handlerDic;
- (id)p_handlerKey:task:;
- (void)setHandlerDic:;
- (void)setCount:;
- (id)init;
- (void)webView:startURLSchemeTask:;
- (void)webView:stopURLSchemeTask:;
- (void).cxx_destruct;
- (long long)count;
+ (id)sharedInstance;
+ (void)webView:startURLSchemeTask:;
+ (void)webView:stopURLSchemeTask:;
@end
