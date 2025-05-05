@interface CNAClassKitResultTransformVisitor : NSObject
@property (nonatomic) CNAutocompleteResultFactory factory;
@property (nonatomic) CLSDataStore dataStore;
@property (nonatomic) Q searchType;
- (id)factory;
- (id)dataStore;
- (unsigned long long)searchType;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithFactory:dataStore:searchType:;
- (id)reduceCollection:;
- (void)visitPerson:;
- (void)visitClass:;
+ (id)addressForPerson:searchType:;
@end
