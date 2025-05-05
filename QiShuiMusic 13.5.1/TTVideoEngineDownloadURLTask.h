@interface TTVideoEngineDownloadURLTask : TTVideoEngineDownloadTask
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString key;
@property (nonatomic) NSString videoId;
- (void)assignWithDict:;
- (BOOL)_shouldRetry:;
- (void)setupBaseFiled;
- (void)updateUrls:;
- (id)urls;
- (id)key;
- (void)suspend;
- (void)setUrls:;
- (void)resume;
- (void)setKey:;
- (void).cxx_destruct;
- (id)jsonDict;
- (BOOL)isEqual:;
+ (id)taskItem;
+ (id)urlTaskWithKey:urls:vid:;
@end
