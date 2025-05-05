@interface TMAlbumService : NSObject
@property (nonatomic) TMAlbumServiceImpl impl;
- (void)saveExtensionImageWithImageData:completionHandler:;
- (void)saveExtensionImageWithImageData:error:;
- (void)saveExtensionImageWithImageData:toAlbum:completionHandler:;
- (void)saveImageWithFileURL:completionHandler:;
- (void)saveImageWithFileURL:error:;
- (void)saveImageWithFileURL:toAlbum:completionHandler:;
- (void)saveImageWithFileURL:toAlbum:error:;
- (void)saveImageWithImage:completionHandler:;
- (void)saveImageWithImage:error:;
- (void)saveImageWithImage:toAlbum:completionHandler:;
- (void)saveImageWithImage:toAlbum:error:;
- (void)saveVideoWithFileURL:completionHandler:;
- (void)saveVideoWithFileURL:error:;
- (void)saveVideoWithFileURL:toAlbum:completionHandler:;
- (void)saveVideoWithFileURL:toAlbum:error:;
- (void)setRequestProperty:location:favorire:hidden:contentEditingOutput:;
- (id)init;
- (void).cxx_destruct;
- (id)impl;
- (void)setImpl:;
@end
