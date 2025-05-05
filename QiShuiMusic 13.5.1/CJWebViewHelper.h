@interface CJWebViewHelper : NSObject
+ (id)buildWebView:;
+ (id)buildWebView:httpMethod:;
+ (id)buildWebviewConfig:httpMethod:;
+ (BOOL)injectSecLinkTO:withScene:withOriginalUrl:;
+ (BOOL)isBlankWeb:;
+ (BOOL)isInExcludeDomains:;
+ (BOOL)isInShowErrorViewDomains:;
+ (void)secLinkGoBackFrom:reachEndBlock:;
+ (id)shared;
@end
