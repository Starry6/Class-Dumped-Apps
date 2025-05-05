@interface CSJUChainDSLDownladerManager : NSObject
+ (void)loadUChainDSLWithConfiguration:completionHandler:;
+ (void)p_eventTrackerWithExtraInfo:;
+ (id)p_fileCacheDirectory;
+ (void)p_loadDefaultUChainDSLWithConfiguration:completionHandler:;
+ (void)p_loadUChainDSLWithConfiguration:completionHandler:;
+ (void)p_loadUChainDSLWithConfiguration:localFile:loadType:completionHandler:;
@end
