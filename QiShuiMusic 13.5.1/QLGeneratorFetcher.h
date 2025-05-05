@interface QLGeneratorFetcher : QLItemFetcher
@property (nonatomic) NSString contentType;
@property (nonatomic) BOOL fetchCompleted;
@property (nonatomic) NSURL url;
- (void)setContentType:;
- (id)url;
- (id)contentType;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)fetchContentWithAllowedOutputClasses:inQueue:updateBlock:completionBlock:;
- (id)initWithURL:contentType:;
- (void)_callCompletionBlockIfNecessary:withReply:error:;
- (BOOL)fetchCompleted;
- (void)setFetchCompleted:;
@end
