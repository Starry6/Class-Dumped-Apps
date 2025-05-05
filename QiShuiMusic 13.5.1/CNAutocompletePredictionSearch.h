@interface CNAutocompletePredictionSearch : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:;
- (id)executeRequest:completionHandler:;
- (id)suggestionsForRequest:;
- (id)strategyForRequest:;
+ (unsigned long long)predictionStrategyForRequest:;
+ (unsigned long long)predictedResultLimit;
@end
