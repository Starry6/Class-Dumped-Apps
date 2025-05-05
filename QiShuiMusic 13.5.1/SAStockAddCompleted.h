@interface SAStockAddCompleted : SABaseCommand
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray stocks;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
- (id)stocks;
- (void)setStocks:;
+ (id)addCompleted;
+ (id)addCompletedWithDictionary:context:;
@end
