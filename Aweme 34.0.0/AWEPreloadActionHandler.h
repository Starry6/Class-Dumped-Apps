@interface AWEPreloadActionHandler : NSObject
+ (void)preloadDataWithModel:group:preloadSize:banPreload:completion:;
+ (void)cancelPreloadWithGroup:;
+ (id)preloaderForModel:;
+ (void)cancelAllPreload;
+ (void)__preloadActionWithModel:bsModel:group:urlModel:preloadSize:completion:;
@end
