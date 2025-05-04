@interface AWEMediaDownloadCacheStage : AWEMediaDownloadBaseStage
- (void)getCache;
- (BOOL)copyCacheFileToDestination:;
- (void)run;
@end
