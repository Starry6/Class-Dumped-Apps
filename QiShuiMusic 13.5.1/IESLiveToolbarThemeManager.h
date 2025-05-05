@interface IESLiveToolbarThemeManager : NSObject
@property (nonatomic) NSMutableDictionary vertical;
@property (nonatomic) NSMutableDictionary landscape;
@property (nonatomic) NSDictionary skinPool;
@property (nonatomic) <IESLiveToolbarComponentHandler> target;
- (void)cacheDataWithSkinPool:complete:;
- (BOOL)checkLocalDataExistStatusWithSkinPool:;
- (id)imageThemeResource:;
- (id)imageThemeResource:defaultGeckoKey:;
- (id)initWithSkinResource:;
- (void)loadImage:completion:;
- (void)pickupResourceForOrientation:;
- (void)prefetchImageDataWithComponentSkin:;
- (void)setSkinPool:;
- (id)skinPool;
- (id)landscape;
- (void)setLandscape:;
- (void)setVertical:;
- (void)setTarget:;
- (id)vertical;
- (void).cxx_destruct;
- (id)target;
@end
