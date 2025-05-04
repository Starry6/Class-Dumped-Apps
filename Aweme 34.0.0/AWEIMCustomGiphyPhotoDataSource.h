@interface AWEIMCustomGiphyPhotoDataSource : NSObject
@property (nonatomic) NSArray albumModels;
- (void)setAlbumModels:;
- (id)albumModels;
- (void)p_appendWithAlbumModels:completion:;
- (id)allPhotosAlbumModel;
- (void)asyncLoadOtherAlbumsWithCompletion:;
- (void)clearAlbumModels;
- (id)init;
- (void).cxx_destruct;
+ (void)asyncReadAlbumsWithType:completion:;
+ (id)mapToAlbumModels:;
@end
