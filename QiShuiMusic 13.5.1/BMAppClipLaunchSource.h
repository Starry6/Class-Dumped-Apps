@interface BMAppClipLaunchSource : NSObject
@property (nonatomic) _CDClientContext contextStore;
@property (nonatomic) _DKKnowledgeStore knowledgeStore;
@property (nonatomic) NSString identifier;
- (void)sendEvent:;
- (id)identifier;
- (id)initWithStoreSource:;
- (void).cxx_destruct;
- (id)contextStore;
- (id)knowledgeStore;
@end
