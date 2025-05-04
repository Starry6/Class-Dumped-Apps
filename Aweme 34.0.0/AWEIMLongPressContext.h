@interface AWEIMLongPressContext : NSObject
@property (nonatomic) q sceneType;
@property (nonatomic) q downloaderType;
@property (nonatomic) UIImage currentImage;
@property (nonatomic) NSString scene;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (void)setDownloaderType:;
- (long long)downloaderType;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)currentImage;
- (long long)sceneType;
- (void)setSceneType:;
- (void)setCurrentImage:;
@end
