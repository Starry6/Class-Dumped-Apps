@interface PFParallaxAssetResourceOptions : NSObject
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) BOOL aspectFit;
@property (nonatomic) @? canHandleAdjustmentData;
@property (nonatomic) NSObject<OS_dispatch_queue> resultHandlerQueue;
@property (nonatomic) @? downloadProgressHandler;
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) q priority;
- (void)setPriority:;
- (void)setAspectFit:;
- (id)imageSize;
- (void).cxx_destruct;
- (BOOL)aspectFit;
- (void)setNetworkAccessAllowed:;
- (void)setResultHandlerQueue:;
- (id)resultHandlerQueue;
- (long long)priority;
- (void)setImageSize:;
- (id)downloadProgressHandler;
- (id)canHandleAdjustmentData;
- (BOOL)networkAccessAllowed;
- (void)setCanHandleAdjustmentData:;
- (void)setDownloadProgressHandler:;
@end
