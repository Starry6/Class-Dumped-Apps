@interface STGroupFetchedResultsController : NSObject
@property (nonatomic) NSFetchedResultsController resultsController;
@property (nonatomic) NSArray resultsControllers;
@property (nonatomic) NSArray resultsRequests;
@property (nonatomic) Q changeCounter;
@property (nonatomic) <STGroupFetchedResultsControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)controllerWillChangeContent:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)controller:didChangeObject:atIndexPath:forChangeType:newIndexPath:;
- (void)controllerDidChangeContent:;
- (id)resultsController;
- (void)setResultsController:;
- (void)_evaluateCounter;
- (id)initWithContext:resultsRequests:;
- (id)initWithResultsRequests:cacheName:managedObjectContext:;
- (id)resultsControllers;
- (void)setResultsControllers:;
- (id)resultsRequests;
- (void)setResultsRequests:;
- (unsigned long long)changeCounter;
- (void)setChangeCounter:;
@end
