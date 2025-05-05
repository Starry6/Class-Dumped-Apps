@interface BDXBridgeDownloadFileMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)failedHandlerWithURL:response:completionHandler:message:;
- (void)requestPHAuthorizationWithCert:handler:;
- (Class)resultModelClass;
- (void)saveImageToAlbumWithURL:response:completionHandler:;
- (void)saveMediaDidFinishSavingWithError:contextInfo:;
- (void)saveVideoToAlbumWithURL:response:completionHandler:;
- (void)video:didFinishSavingWithError:contextInfo:;
- (id)methodName;
- (void)image:didFinishSavingWithError:contextInfo:;
+ (id)metaInfo;
@end
