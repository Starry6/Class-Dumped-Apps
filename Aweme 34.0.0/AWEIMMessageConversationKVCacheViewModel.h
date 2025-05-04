@interface AWEIMMessageConversationKVCacheViewModel : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSDictionary kVCache;
@property (nonatomic) BOOL preparedFromDisk;
- (void)updateWithKey:value:overwrite:persistent:;
- (void)asyncGetValueWithKey:completion:;
- (void)setPreparedFromDisk:;
- (id)kVCache;
- (void)setKVCache:;
- (BOOL)preparedFromDisk;
- (void)__prepareDataFromDiskWithCompletion:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)initWithConversation:;
@end
