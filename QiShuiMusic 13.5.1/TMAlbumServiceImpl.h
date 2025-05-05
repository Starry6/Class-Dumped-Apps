@interface TMAlbumServiceImpl : NSObject
@property (nonatomic) {TMAlbumServiceStruct=@@BB@} requestContext;
- (void)setContextToRequest:;
- (void)tm_saveExtensionImageWithImageData:completionHandler:;
- (void)tm_saveExtensionImageWithImageData:error:;
- (void)tm_saveExtensionImageWithImageData:toAlbum:completionHandler:;
- (void)tm_saveImageWithFileURL:completionHandler:;
- (void)tm_saveImageWithFileURL:error:;
- (void)tm_saveImageWithFileURL:toAlbum:completionHandler:;
- (void)tm_saveImageWithFileURL:toAlbum:error:;
- (void)tm_saveImageWithImage:completionHandler:;
- (void)tm_saveImageWithImage:error:;
- (void)tm_saveImageWithImage:toAlbum:completionHandler:;
- (void)tm_saveImageWithImage:toAlbum:error:;
- (void)tm_saveVideoWithFileURL:completionHandler:;
- (void)tm_saveVideoWithFileURL:error:;
- (void)tm_saveVideoWithFileURL:toAlbum:completionHandler:;
- (void)tm_saveVideoWithFileURL:toAlbum:error:;
- (void)setRequestContext:;
- (id)requestContext;
- (void).cxx_destruct;
@end
