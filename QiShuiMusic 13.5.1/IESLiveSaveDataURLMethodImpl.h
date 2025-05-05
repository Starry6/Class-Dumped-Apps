@interface IESLiveSaveDataURLMethodImpl : IESLiveSaveDataURLMethod
- (id)filePathByStrippingSandboxPath:;
- (void)callWithParamModel:completionHandler:;
- (void)requestPHAuthorization:;
- (void)saveBase64DataToAlbum:fileURL:saveToAlbum:completion:;
- (void)saveMediaDidFinishSavingWithError:contextInfo:;
- (void)saveMediaToAlbumWithURL:isImage:completion:;
- (void)video:didFinishSavingWithError:contextInfo:;
- (void)image:didFinishSavingWithError:contextInfo:;
@end
