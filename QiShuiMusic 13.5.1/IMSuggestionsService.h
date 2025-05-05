@interface IMSuggestionsService : NSObject
- (id)serviceConnection;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)fetchCNContactForSuggestedHandle:;
- (BOOL)_maybePhoneNumber:;
- (BOOL)_maybeEmailAddress:;
- (BOOL)isBusiness:;
- (void)startUsingLocalLookupsWithTable:;
- (void)stopUsingLocalLookups;
- (id)suggestedNameFromCache:wasFound:;
- (void)fetchSuggestedRealNameForDisplayName:messageUID:queue:block:;
- (void)_startRequestForDisplayName:messageUID:queue:;
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:displayName:queue:;
- (void)scheduleFetchIfNecessaryForHandle:;
- (id)_contactForSGContactMatch:;
- (id)personNameComponentsForHandle:;
+ (id)sharedInstance;
@end
