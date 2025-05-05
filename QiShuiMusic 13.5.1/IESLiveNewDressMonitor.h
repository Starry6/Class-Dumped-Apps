@interface IESLiveNewDressMonitor : NSObject
@property (nonatomic) IESLiveNewDressContext context;
- (long long)getErrorCodeFromError:;
- (void)monitorFetchDressListWithVersion:dressIDs:error:response:duration:;
- (void)monitorGetDressResourceWithDressID:dressType:isComplete:error:;
- (void)monitorGetDressWithDressID:version:error:duration:inSyncMode:;
- (void)monitorPrefetchWithDressID:dress:source:duration:error:;
- (long long)prefetchErrorCodeFromError:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
