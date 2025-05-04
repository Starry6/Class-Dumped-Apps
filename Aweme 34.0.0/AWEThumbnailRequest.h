@interface AWEThumbnailRequest : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSMutableArray completionBlocks;
@property (nonatomic) NSOperation operation;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) NSLock lock;
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL fromCache;
- (BOOL)fromCache;
- (void)setFromCache:;
- (id)initWithKey:cacheImage:;
- (id)initWithKey:completion:cancel:;
- (id)completionBlocks;
- (id)operation;
- (void)setOperation:;
- (id)image;
- (void)setKey:;
- (void)setLock:;
- (void)addCompletion:;
- (void)setImage:;
- (void)setCancelBlock:;
- (void)setCompletionBlocks:;
- (id)lock;
- (id)key;
- (void)cancel;
- (void).cxx_destruct;
- (id)cancelBlock;
- (void)completeWithImage:;
@end
