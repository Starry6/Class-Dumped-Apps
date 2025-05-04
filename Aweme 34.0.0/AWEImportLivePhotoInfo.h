@interface AWEImportLivePhotoInfo : NSObject
@property (nonatomic) PHLivePhoto livePhoto;
@property (nonatomic) NSURL videoURL;
@property (nonatomic) NSURL imageURL;
- (void)setVideoURL:;
- (id)videoURL;
- (id)livePhoto;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setLivePhoto:;
- (void)setImageURL:;
@end
