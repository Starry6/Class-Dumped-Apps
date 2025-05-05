@interface GEOPlaceCardRequester : NSObject
- (void)cancelRequest:;
- (void)clearCache;
- (id)init;
- (unsigned long long)calculateFreeableSpaceSync;
- (id)_takeConnectionForRequestUUID:;
- (void)shrinkBySize:finished:;
- (id)_createServerConnection:;
- (void)trackPlaceData:;
- (void).cxx_destruct;
- (id)requestIdentifiers:resultProviderID:traits:options:auditToken:throttleToken:networkActivity:requesterHandler:;
- (void)fetchAllCacheEntriesWithRequesterHandler:;
- (unsigned long long)shrinkBySizeSync:;
- (id)performPlaceDataRequest:traits:cachePolicy:timeout:auditToken:throttleToken:networkActivity:requesterHandler:;
- (void)calculateFreeableSpaceWithHandler:;
- (id)requestPhoneNumbers:allowCellularDataForLookup:traits:auditToken:throttleToken:networkActivity:requesterHandler:;
+ (id)sharedRequester;
@end
