@interface AWEVideoCoverFontDataLoader : NSObject
@property (nonatomic) BOOL shouldFetchFontList;
@property (nonatomic) NSArray stickerFonts;
@property (nonatomic) q state;
- (id)stickerFonts;
- (id)handleWithFontEffects:;
- (void)fetchFontEffectList;
- (void)onClearCache;
- (BOOL)shouldFetchFontList;
- (void)setShouldFetchFontList:;
- (void)setStickerFonts:;
- (id)init;
- (long long)state;
- (void).cxx_destruct;
- (void)setState:;
+ (void)downloadFontWithModel:completion:;
+ (id)fontWithModel:size:;
+ (id)fontFilePath:;
+ (void)removeCachedEffectWithId:;
+ (id)cachedEffectWithID:;
+ (id)loadFontWithFontPath:size:completion:;
+ (void)downloadEffect:fontModel:completion:;
+ (void)trackWithError:extraInfo:;
+ (id)panelName;
@end
