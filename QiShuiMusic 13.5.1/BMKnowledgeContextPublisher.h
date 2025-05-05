@interface BMKnowledgeContextPublisher : BPSPublisher
@property (nonatomic) _DKEventQuery query;
@property (nonatomic) <_DKKnowledgeQuerying> store;
@property (nonatomic) <_CDUserContext> context;
@property (nonatomic) BOOL includeLiveEvents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStore:;
- (id)context;
- (void)setQuery:;
- (id)query;
- (void)subscribe:;
- (id)initWithQuery:store:context:includeLiveEvents:;
- (BOOL)includeLiveEvents;
- (void)setIncludeLiveEvents:;
- (void).cxx_destruct;
- (id)store;
- (void)setContext:;
- (id)withLiveEvents;
@end
