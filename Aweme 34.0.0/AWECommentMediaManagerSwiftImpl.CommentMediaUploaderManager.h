@interface AWECommentMediaManagerSwiftImpl.CommentMediaUploaderManager : NSObject
- (void)uploadMedia:mediaUploadCompletionBlock:progressBlock:;
- (id)imageUploader:imageSource:;
- (id)livePhotoUploader:;
- (id)audioUploader:;
- (id)init;
- (void).cxx_destruct;
@end
