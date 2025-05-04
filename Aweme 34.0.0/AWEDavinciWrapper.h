@interface AWEDavinciWrapper : NSObject
@property (nonatomic) AWEDavinciWrapperConfig config;
- (void)setupResourceManager;
- (id)UTF8String:;
- (void)loadAlgorithmResource:handler:;
- (void)loadLokiResource:handler:;
- (void)loadArtistResource:handler:;
- (void)loadMediaResource:handler:;
- (BOOL)algorithmResourceHasLocalCache:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (id).cxx_construct;
- (void).cxx_destruct;
@end
