@interface AWENetworkToken : NSObject
+ (BOOL)sessionExpiredWithData:;
+ (void)addXTokenForRequest:;
+ (void)setXTokenForResponse:request:data:error:;
+ (BOOL)shouldAddToken:;
+ (void)detectTokenResult:shareCookieList:canAddToken:;
+ (BOOL)isResponseInSharedCookieHost:;
+ (void)p_setXTokenForResponse:request:data:error:;
+ (void)setup;
+ (id)currentToken;
+ (void)start;
@end
