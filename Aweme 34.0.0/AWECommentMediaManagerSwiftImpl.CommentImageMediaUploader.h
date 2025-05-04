@interface AWECommentMediaManagerSwiftImpl.CommentImageMediaUploader : NSObject
@property (nonatomic) @? mediaUploadAuthCompletionBlock;
@property (nonatomic) @? mediaUploadCompressCompletionBlock;
@property (nonatomic) @? progressBlock;
@property (nonatomic) @? mediaUploadCompletionBlock;
- (void)startUpload;
- (id)mediaUploadAuthCompletionBlock;
- (void)setMediaUploadAuthCompletionBlock:;
- (id)mediaUploadCompressCompletionBlock;
- (void)setMediaUploadCompressCompletionBlock:;
- (id)mediaUploadCompletionBlock;
- (void)setMediaUploadCompletionBlock:;
- (void)configUploader;
- (id)uploadBusinessAuthParams;
- (id)generateAuthParams;
- (BOOL)startMediaUploadAuth:;
- (id)configUploadAuthCompletion;
- (id)progressBlock;
- (id)init;
- (void)setProgressBlock:;
- (void).cxx_destruct;
@end
