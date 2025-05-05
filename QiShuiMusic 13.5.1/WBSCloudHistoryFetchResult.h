@interface WBSCloudHistoryFetchResult : NSObject
@property (nonatomic) NSArray cloudHistoryVisits;
@property (nonatomic) NSArray historyTombstones;
@property (nonatomic) NSDictionary clientVersions;
@property (nonatomic) NSData serverChangeTokenData;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)serverChangeTokenData;
- (id)cloudHistoryVisits;
- (void)_addCloudHistoryVisit:;
- (id)clientVersions;
- (void)_updateClientVersion:seenAt:;
- (id)historyTombstones;
- (void)_addHistoryTombstone:;
- (void)_setServerChangeTokenData:;
@end
