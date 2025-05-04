@interface AWEDelegateProxyFallback : NSObject
- (void)unrespondsToSelector:;
+ (id)defaultFallback;
@end
