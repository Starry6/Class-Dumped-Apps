@interface CADCalSearchOperation : NSOperation
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)main;
- (void).cxx_destruct;
- (void)_completeOperation;
- (void)calSearchComplete:;
- (void)calSearch:showResultsStartingOnDate:;
- (void)calSearch:foundOccurrences:cachedDays:cachedDaysIndexes:;
- (BOOL)calSearchShouldStopSearching:;
- (void)configureSearch:;
- (id)initWithConnection:searchTerm:calendars:replyID:;
- (unsigned int)replyID;
+ (id)operationWithConnection:searchTerm:calendars:replyID:;
@end
