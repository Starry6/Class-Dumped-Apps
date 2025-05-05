@interface CNAutocompleteContactsSearchTaskContext : NSObject
@property (nonatomic) <CNAutocompleteSearchConsumer> consumer;
@property (nonatomic) NSString text;
@property (nonatomic) NSMutableSet operations;
@property (nonatomic) NSMutableSet searchQueries;
- (id)operations;
- (id)consumer;
- (void).cxx_destruct;
- (id)text;
- (BOOL)done;
- (BOOL)consumerRespondsToCallbacks;
- (id)searchQueries;
+ (id)contextWithConsumer:text:operations:searchQueries:;
@end
