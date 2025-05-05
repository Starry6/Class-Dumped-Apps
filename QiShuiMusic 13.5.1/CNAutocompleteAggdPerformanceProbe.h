@interface CNAutocompleteAggdPerformanceProbe : NSObject
@property (nonatomic) CNAutocompleteAggdProbe aggdProbe;
@property (nonatomic) NSMutableDictionary pendingAddData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)sendData;
- (void)recordNumberOfResultsReturned:inTimeInterval:forBatch:includesServers:;
- (void)recordNumberOfRecentResults:inTimeInterval:;
- (void)recordNumberOfStewieResults:inTimeInterval:;
- (void)recordNumberOfContactResults:inTimeInterval:;
- (void)recordNumberOfSuggestionResults:inTimeInterval:;
- (void)recordNumberOfDirectoryServerResults:inTimeInterval:;
- (void)recordNumberOfPredictionResults:inTimeInterval:;
- (void)recordNumberOfSupplementalResults:inTimeInterval:;
- (void)recordNumberOfCalendarServerResults:inTimeInterval:;
- (id)initWithAggdProbe:;
- (void)recordLatency:forResultCount:forSource:;
- (id)aggdProbe;
- (void)setAggdProbe:;
- (id)pendingAddData;
@end
