@interface EKPredicateSearch : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)terminate;
- (void)cancel;
- (void)_startActualWithCompletion:synchronous:;
- (void)signpostEndWithError:count:;
- (id)initWithEntityClass:predicate:store:;
- (id)startWithCompletion:;
- (void)_fetchObjectIDsActualWithCompletion:synchronous:;
- (void)signpostStart;
- (void).cxx_destruct;
- (void)_startFetchObjectIDsActivityWithCompletion:synchronous:;
- (void)_startActivityWithCompletion:synchronous:;
- (id)fetchObjectIDs;
- (id)_createOSActivity;
- (id)runSynchronously;
- (void)_startProcessingWithCompletion:synchronous:processor:;
+ (id)signpostHandle;
+ (id)searchWithEntityClass:predicate:store:;
@end
