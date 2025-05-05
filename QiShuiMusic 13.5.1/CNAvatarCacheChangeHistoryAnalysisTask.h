@interface CNAvatarCacheChangeHistoryAnalysisTask : CNTask
@property (nonatomic) CNContactStore store;
@property (nonatomic) NSData startingToken;
@property (nonatomic) CNChangeHistoryFetchRequest request;
@property (nonatomic) CNResult enumerator;
@property (nonatomic) NSData finalToken;
@property (nonatomic) NSArray identifiers;
- (id)run:;
- (id)identifiers;
- (id)enumerator;
- (id)request;
- (void)setIdentifiers:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)startingToken;
- (id)store;
- (void)setEnumerator:;
- (void)executeRequest;
- (id)finalToken;
- (id)initWithContactStore:startingToken:;
- (void)makeRequest;
- (void)extractIdentifiers;
- (void)setFinalToken:;
@end
