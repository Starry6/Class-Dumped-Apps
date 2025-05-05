@interface PHImportAssetDataRequest : NSObject
@property (nonatomic) @? cancelBlock;
@property (nonatomic) PHImportAsset asset;
@property (nonatomic) PHImportAsset requestAsset;
- (BOOL)isCanceled;
- (id)initWithAsset:;
- (void)cancel;
- (void)setCancelBlock:;
- (id)asset;
- (id)cancelBlock;
- (void).cxx_destruct;
- (void)setAsset:;
- (id)requestAsset;
@end
