@interface BDADetailPreloader : NSObject
- (void)landingPreloadSend:extra:;
- (void)preloadResource:completed:;
- (void)resolveMetaInfo:preloadModel:resourece:;
+ (id)sharedPreloader;
@end
