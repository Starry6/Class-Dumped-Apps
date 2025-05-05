@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation
- (void)execute;
- (void)cancel;
- (void).cxx_destruct;
- (id)configurationForLoadingModelDataWithStoreURLBag:error:;
- (void)produceResponseWithLoadedOutput:completion:;
- (double)adjustTimeoutInterval:;
- (id)_nestedRequestsOperationQueue;
- (void)_produceCarPlayResponseWithParser:withNestedRequestsForEmptyBrickSectionsInOperationQueue:completion:;
- (void)_produceRegularResponseWithParser:completion:;
- (void)_produceResponseWithParser:results:changeDetails:completion:;
@end
