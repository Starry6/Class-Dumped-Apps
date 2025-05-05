@interface BDXResourcePreloader : NSObject
+ (void)_loadResource:taskConfig:;
+ (void)commonPreloadWithConfig:preloadItem:taskConfig:;
+ (id)concurrentOperationQueue;
+ (void)dealNotificationAction:;
+ (void)gurdPreloadWithConfig:preloadItem:taskConfig:;
+ (void)loadResource:taskConfig:;
+ (void)monitorFetchEventWithURLString:success:metric:res_tag:res_version:res_from:res_url:res_channel:res_message:;
+ (void)preloadImageWithConfig:preloadItem:taskConfig:;
+ (id)resourcePreloaderSerialQueue;
+ (void)schemaPreload:taskConfig:;
+ (id)serialOperationQueue;
@end
