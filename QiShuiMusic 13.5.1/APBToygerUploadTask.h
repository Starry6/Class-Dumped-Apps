@interface APBToygerUploadTask : APBToygerBaseTask
- (void)didFinishUploadWithSuccess:retCode:retMessage:extInfo:;
- (void)handleFailWithRetCodeSub:retMessageSub:;
- (void)requestAgain;
- (void)uploadImage;
@end
