@interface IESMMAudioMusicLengthen : IESMMObject
@property (nonatomic) @? progressCallback;
@property (nonatomic) @? finishCallback;
@property (nonatomic) @? cancelCallback;
@property (nonatomic) NSString outPath;
@property (nonatomic) BOOL isProcessing;
- (void)destroyInstance;
- (id)outPath;
- (id)cancelCallback;
- (id)finishCallback;
- (void)generateLengthenMusicWith:musicPath:outPath:targetSec:startSec:endSec:progressBlock:finishBlock:cancelBlock:;
- (id)progressCallback;
- (void)setCancelCallback:;
- (void)setFinishCallback:;
- (void)setIsProcessing:;
- (void)setOutPath:;
- (void)setProgressCallback:;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)isProcessing;
+ (id)shareInstance;
@end
