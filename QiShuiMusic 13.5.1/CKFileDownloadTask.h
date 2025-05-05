@interface CKFileDownloadTask : NSObject
@property (nonatomic) CKDownloadInfo_OC downloadInfo;
@property (nonatomic) NSMutableArray progressBlocks;
@property (nonatomic) NSMutableArray completionBlocks;
- (void)callbackProgress:progressModel:;
- (void)addCallback:completion:;
- (void)callbackCompletion:completionModel:;
- (id)initWithDownloadInfo:progressBlock:completionBlock:;
- (id)completionBlocks;
- (void).cxx_destruct;
- (id)downloadInfo;
- (void)setDownloadInfo:;
- (id)progressBlocks;
@end
