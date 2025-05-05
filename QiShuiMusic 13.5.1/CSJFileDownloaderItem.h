@interface CSJFileDownloaderItem : NSObject
@property (nonatomic) NSMutableArray completionBlocks;
@property (nonatomic) NSLock lock;
@property (nonatomic) NSString fileUrlStr;
- (void)callCompletionBlksWithURL:;
- (id)fileUrlStr;
- (void)setFileUrlStr:;
- (id)completionBlocks;
- (void)addCompletionBlock:;
- (id)init;
- (void)setCompletionBlocks:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
@end
