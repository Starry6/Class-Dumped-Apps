@interface IESLiveDownloadFileMethodImpl : IESLiveDownloadFileMethod
- (id)filePathByStrippingSandboxPath:;
- (id)makeError:code:;
- (void)callWithParamModel:completionHandler:;
- (void)requestPHAuthorization:;
- (void)saveImageToAlbumWithURL:response:completionHandler:;
- (void)saveMediaDidFinishSavingWithError:contextInfo:;
- (void)saveVideoToAlbumWithURL:response:completionHandler:;
- (void)video:didFinishSavingWithError:contextInfo:;
- (void)image:didFinishSavingWithError:contextInfo:;
@end
