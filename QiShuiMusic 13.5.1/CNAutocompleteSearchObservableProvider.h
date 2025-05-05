@interface CNAutocompleteSearchObservableProvider : NSObject
@property (nonatomic) <CNAutocompleteSearchProvider> searchProvider;
@property (nonatomic) CNAutocompleteFetchRequest fetchRequest;
@property (nonatomic) <CNScheduler> scheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchProvider;
- (id)scheduler;
- (void).cxx_destruct;
- (id)fetchRequest;
- (id)localSearchObservable;
- (id)recentsSearchObservable;
- (id)stewieSearchObservable;
- (id)suggestionsSearchObservable;
- (id)predictionsSearchObservableWithUnfilteredResultPromise:;
- (id)localExtensionSearchObservables;
- (id)directoryServersSearchObservable;
- (id)calendarServersSearchObservable;
- (id)initWithSearchProvider:fetchRequest:scheduler:;
- (BOOL)shouldAllowPredictionSearchToSourceResults;
- (id)observableWithWrappedSearchProviderGetter:name:;
+ (id)providerWithSearchProvider:fetchRequest:scheduler:;
@end
