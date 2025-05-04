@interface AWEClassroomImpl.ClassroomMediaUploader : NSObject
- (void)videoUpload:didFinish:error:;
- (void)videoUpload:progressDidUpdate:;
- (void)imageXUpload:fileIndex:singleImage:error:;
- (void)imageXUpload:fileIndex:progressDidUpdate:;
- (void)imageXUploadDidFinish:;
- (long long)imageXUploadGetNetState:;
- (void)imageXUpload:onLogInfo:;
- (id)init;
- (void).cxx_destruct;
@end
