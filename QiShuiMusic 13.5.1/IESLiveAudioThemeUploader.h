@interface IESLiveAudioThemeUploader : NSObject
@property (nonatomic) IESLiveAudioThemeApi api;
@property (nonatomic) @? uploadCompletionBlock;
@property (nonatomic) TTHttpTask uploadTask;
@property (nonatomic) NSProgress uploadProgress;
@property (nonatomic) RACDisposable uploadProgressDisposable;
- (id)precheckThemeWithAsset:;
- (void)setUploadProgressDisposable:;
- (void)stopUploading;
- (void)uploadAnimatedImage:config:progress:completion:;
- (void)uploadFileWithConstructingBodyWithBlock:config:progress:completion:;
- (void)uploadImage:config:progress:completion:;
- (id)uploadProgressDisposable;
- (void)uploadThemeWithAsset:config:progress:completion:;
- (void)uploadVideoWithUrl:config:progress:completion:;
- (void)setUploadCompletionBlock:;
- (id)uploadCompletionBlock;
- (void).cxx_destruct;
- (id)api;
- (id)uploadProgress;
- (id)uploadTask;
- (void)setUploadTask:;
- (void)setApi:;
- (void)setUploadProgress:;
@end
