@interface CNAutocompleteCalendarServerSearch : NSObject
@property (nonatomic) CNStringTokenizer tokenizer;
@property (nonatomic) EKEventStore eventStore;
@property (nonatomic) CNAutocompleteCalendarServerOperationFactory operationFactory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)eventStore;
- (void)setTokenizer:;
- (id)tokenizer;
- (void).cxx_destruct;
- (id)executeRequest:completionHandler:;
- (id)initWithEventStore:operationFactory:;
- (id)executeRequest:source:resultsFactory:withCompletionHandler:;
- (id)queryForFetchRequest:;
- (id)resultTransformWithFactory:;
- (id)operationFactory;
+ (BOOL)isSupported;
@end
