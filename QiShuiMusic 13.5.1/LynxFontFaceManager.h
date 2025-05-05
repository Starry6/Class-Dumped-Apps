@interface LynxFontFaceManager : NSObject
@property (nonatomic) BOOL enableGenericResourceFetcherInFont;
- (BOOL)addFontAliasForFamilyName:;
- (id)cachedKey:;
- (BOOL)enableGenericResourceFetcherInFont;
- (id)findFontWithSize:weight:style:fontFamilyName:fontInfo:;
- (double)fontWeightOfFont:;
- (id)generateFontWithSize:weight:style:fontFamilyName:fontFaceContext:fontFaceObserver:;
- (id)generateUIFontWithSize:weight:style:fontFamilyName:fontFaceContext:fontFaceObserver:fontInfo:;
- (id)getRegisteredUIFont:fontSize:;
- (void)handleFontData:withItem:lynxView:withCacheKey:;
- (void)handleGenericResourceFetcherFontData:withError:withItem:lynxView:withCacheKey:;
- (BOOL)isFont:matchFontStyle:;
- (BOOL)isFont:matchFontWeight:;
- (void)notifyFontFaceObserverWithItem:lynxFontFaceContext:;
- (void)onRequestErrorClearCache:;
- (BOOL)onRequestStartForItem:cache:fontFaceObserver:;
- (void)registerFamilyName:withAliasName:;
- (void)registerFont:forName:;
- (id)registerFontWithData:withCacheKey:lynxView:;
- (void)reportResourceError:withLynxView:resourceUrl:;
- (void)requestFontfaceByFontProviderWithItem:fontFaceContext:fontFaceObserver:cacheKey:;
- (void)requestFontfaceItem:fontFaceContext:fontFaceObserver:cacheKey:;
- (void)setEnableGenericResourceFetcherInFont:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
