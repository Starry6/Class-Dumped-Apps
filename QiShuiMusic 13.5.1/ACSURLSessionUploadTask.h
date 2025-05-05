@interface ACSURLSessionUploadTask : ACSURLSessionDataTask
- (id)initWithNSURLUploadTaskCreator:initialRequest:forSession:;
- (BOOL)_isUpload;
@end
