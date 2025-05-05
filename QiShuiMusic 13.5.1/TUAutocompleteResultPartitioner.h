@interface TUAutocompleteResultPartitioner : NSObject
@property (nonatomic) NSMutableArray normalResultsArray;
@property (nonatomic) NSMutableArray foundInMailResultsArray;
@property (nonatomic) NSMutableArray foundOnServersResultsArray;
@property (nonatomic) TUSearchController searchController;
- (id)init;
- (void)setSearchController:;
- (id)searchResults;
- (void).cxx_destruct;
- (id)searchController;
- (void)addResult:;
- (id)normalResultsArray;
- (void)setNormalResultsArray:;
- (id)foundInMailResultsArray;
- (void)setFoundInMailResultsArray:;
- (id)foundOnServersResultsArray;
- (void)setFoundOnServersResultsArray:;
+ (BOOL)sourceTypeIsFoundInMail:;
+ (BOOL)sourceTypeIsFoundOnServers:;
@end
