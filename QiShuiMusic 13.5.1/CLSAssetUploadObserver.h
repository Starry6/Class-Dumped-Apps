@interface CLSAssetUploadObserver : NSObject
@property (nonatomic) CLSAsset asset;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) double uploadProgress;
@property (nonatomic) NSError uploadError;
@property (nonatomic) @? onUploadProgress;
@property (nonatomic) @? onUploadComplete;
- (id)initWithAsset:;
- (id)asset;
- (void)startObserving;
- (void)stopObserving;
- (void).cxx_destruct;
- (void)setAsset:;
- (BOOL)isUploaded;
- (void)setUploaded:;
- (id)uploadError;
- (double)uploadProgress;
- (id)onUploadProgress;
- (void)setOnUploadProgress:;
- (id)onUploadComplete;
- (void)setOnUploadComplete:;
@end
