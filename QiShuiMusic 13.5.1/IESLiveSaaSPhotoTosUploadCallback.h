@interface IESLiveSaaSPhotoTosUploadCallback : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString frameBase64;
- (void)setFrameBase64:;
- (id)frameBase64;
- (void)setStatusMsg:;
- (id)statusMsg;
- (id)uri;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (void)setUri:;
@end
