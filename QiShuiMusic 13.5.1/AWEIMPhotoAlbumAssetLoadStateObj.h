@interface AWEIMPhotoAlbumAssetLoadStateObj : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL finish;
@property (nonatomic) NSError error;
@property (nonatomic) NSData imageData;
@property (nonatomic) UIImage image;
@property (nonatomic) AVAsset videoAsset;
@property (nonatomic) UIImage videoCoverImage;
@property (nonatomic) q type;
- (id)videoCoverImage;
- (void)setVideoCoverImage:;
- (void)setImageData:;
- (id)imageData;
- (void)setError:;
- (id)identifier;
- (void)setType:;
- (BOOL)finish;
- (void)setImage:;
- (id)error;
- (long long)type;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)image;
- (id)videoAsset;
- (void)setVideoAsset:;
- (void)setFinish:;
@end
