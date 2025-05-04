@interface AWESearchScanHistoryDataController : NSObject
@property (nonatomic) NSArray historyModels;
@property (nonatomic) NSDictionary historyRequestParams;
@property (nonatomic) NSArray deleteHistoryIDs;
- (void)setHistoryModels:;
- (void)getScanHistoryRecond:completion:;
- (void)deleteScanHistoryRecond:completion:;
- (id)historyRequestParams;
- (void)setHistoryRequestParams:;
- (id)deleteHistoryIDs;
- (void)setDeleteHistoryIDs:;
- (id)historyModels;
- (void).cxx_destruct;
@end
