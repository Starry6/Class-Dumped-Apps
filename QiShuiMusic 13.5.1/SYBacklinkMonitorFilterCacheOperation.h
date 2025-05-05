@interface SYBacklinkMonitorFilterCacheOperation : SYBacklinkMonitorOperation
- (long long)type;
- (void)_searchBacklinksForInputUserActivity;
- (void)_finishProcessingAndNotify;
- (void)_updateBacklinkFilterCacheWithInfos:;
@end
