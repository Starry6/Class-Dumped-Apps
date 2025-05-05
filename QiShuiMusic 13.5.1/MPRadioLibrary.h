@interface MPRadioLibrary : NSObject
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) Q stationCount;
@property (nonatomic) NSArray stations;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)stations;
- (void)getRecentStationGroupsWithCompletionHandler:;
- (void)_radioAvailabilityDidChangeNotification:;
- (void)_radioRecentStationsDidChangeNotification:;
- (void)_radioModelDidChangeNotification:;
- (unsigned long long)stationCount;
- (id)stationWithIdentifier:;
- (id)_radioModel;
+ (id)defaultRadioLibrary;
@end
