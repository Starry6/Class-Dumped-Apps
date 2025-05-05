@interface CNAutocompleteStoreQueryHelper : NSObject
@property (nonatomic) <CNAutocompleteFetchDelegate> delegate;
@property (nonatomic) <CNScheduler> scheduler;
@property (nonatomic) CNAutocompleteStoreQueryContext queryContext;
@property (nonatomic) <CNAutocompleteProbeProvider> probeProvider;
@property (nonatomic) CNAutocompleteUserSession userSession;
@property (nonatomic) <CNAutocompleteSearchProvider> searchProvider;
- (id)userSession;
- (id)searchProvider;
- (id)scheduler;
- (id)queryContext;
- (id)delegate;
- (void).cxx_destruct;
- (id)probeProvider;
- (id)initWithSearchProvider:delegate:probeProvider:scheduler:userSession:;
- (id)executeFetchRequest:delegate:delegateToken:;
@end
