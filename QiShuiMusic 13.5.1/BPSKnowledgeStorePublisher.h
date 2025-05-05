@interface BPSKnowledgeStorePublisher : BPSPublisher
@property (nonatomic) _DKEventQuery query;
@property (nonatomic) <_DKKnowledgeQuerying> store;
- (id)init;
- (id)query;
- (void)subscribe:;
- (void).cxx_destruct;
- (id)store;
- (id)initWithEventQuery:knowledgeStore:;
+ (id)new;
@end
