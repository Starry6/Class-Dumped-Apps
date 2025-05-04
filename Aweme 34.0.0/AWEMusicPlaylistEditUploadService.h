@interface AWEMusicPlaylistEditUploadService : NSObject
@property (nonatomic) NSString coverURL;
- (void)uploadPlaylistModel:originalInfo:isMiniLuna:completion:;
- (void)notifyPlaylistChangedWithModel:originalInfo:;
- (void)uploadToPictureBedWithImage:completion:;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)sharedInstance;
@end
