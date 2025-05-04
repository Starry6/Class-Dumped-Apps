@interface AWECommentMediaManagerSwiftImpl.CommentAudioUploader : NSObject
@property (nonatomic) @? mediaUploadAuthCompletionBlock;
@property (nonatomic) @? mediaUploadCompressCompletionBlock;
@property (nonatomic) @? mediaUploadCompletionBlock;
@property (nonatomic) @? progressBlock;
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
- (void)startUpload;
- (id)progressBlock;
- (id)init;
- (void)setProgressBlock:;
- (void).cxx_destruct;
@end
