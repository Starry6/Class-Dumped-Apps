@interface AWECommentAudioUploadManager : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) AWECommentUploadAuthResponse response;
@property (nonatomic) BDVideoUploaderClient client;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoUpload:didFinish:error:;
- (void)videoUpload:progressDidUpdate:;
- (void)uploadAudioWithFilePath:authCompletion:completion:;
- (void)trackCommentAudioAbnormalCaseWithType:errorCode:;
- (void)startUploadAudioWithFilePath:;
- (void)uploadAudioWithFilePath:completion:;
- (id)completion;
- (void)setClient:;
- (void)setCompletion:;
- (id)client;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
+ (id)sharedManager;
@end
