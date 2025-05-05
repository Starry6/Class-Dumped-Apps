@interface BMCoreDuetStream : NSObject
@property (nonatomic) <_DKKnowledgeQuerying> store;
@property (nonatomic) <_CDUserContext> context;
@property (nonatomic) _DKEventQuery query;
@property (nonatomic) NSString identifier;
- (id)init;
- (id)context;
- (id)initWithKnowledgeStore:clientContext:identifier:;
- (id)identifier;
- (id)query;
- (id)publisherForQuery:;
- (void).cxx_destruct;
- (id)store;
+ (id)new;
@end
