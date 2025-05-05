@interface CNAutocompleteQueryResponsePreparer : NSObject
@property (nonatomic) <CNAutocompleteFetchDelegate> delegate;
@property (nonatomic) CNAutocompleteFetchRequest fetchRequest;
@property (nonatomic) <CNFuture> priorityResultsFuture;
@property (nonatomic) <CNPromise> matchingPriorityResultsPromise;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)fetchRequest;
- (id)sortResults;
- (id)addDiagnosticLog:;
- (id)askDelegateToAdjustResults;
- (id)suppressResultsWithAddresses:;
- (id)initWithDelegate:fetchRequest:;
- (id)prepareResults:;
- (id)findUniqueResults:;
- (id)resultsNotPreviouslyReturned:;
- (id)applyPriorityResultsOrder:;
- (id)priorityResultsFuture;
- (void)setPriorityResultsFuture:;
- (id)matchingPriorityResultsPromise;
- (void)setMatchingPriorityResultsPromise:;
@end
