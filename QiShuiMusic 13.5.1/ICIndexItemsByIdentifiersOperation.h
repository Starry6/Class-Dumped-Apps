@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation
@property (nonatomic) NSArray objectIDURIsToIndex;
- (void)main;
- (void).cxx_destruct;
- (id)initWithSearchableIndex:dataSources:;
- (id)initWithSearchableIndex:dataSources:objectIDURIsToIndex:;
- (id)objectIDURIsToIndex;
- (void)setObjectIDURIsToIndex:;
@end
