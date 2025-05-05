@interface CJPayRequestCommonConfiguration : NSObject
+ (void)appendCustomHeaderProtocol:;
+ (id)httpRequestHeaderProtocols;
+ (id)p_customHttpRequestHeaderProtocols;
+ (Class)requestInterceptProtocol;
+ (void)setRequestInterceptProtocol:;
@end
