@interface IESLiveUserCardMonitor : NSObject
@property (nonatomic) NSMutableDictionary monitorDict;
- (void)setMonitorDict:;
- (void)addDict:;
- (id)monitorDict;
- (void)trackUpload;
- (void)setString:forKey:;
- (id)init;
- (void)clearAllData;
- (void)setNumber:forKey:;
- (void).cxx_destruct;
@end
