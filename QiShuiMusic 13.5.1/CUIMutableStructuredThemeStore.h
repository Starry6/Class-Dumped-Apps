@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore
- (id)allImageNames;
- (id)path;
- (void)dealloc;
- (BOOL)usesCUISystemThemeRenditionKey;
- (id)renditionWithKey:;
- (id)deploymentPlatformString;
- (id)themeStore;
- (id)renditionWithKey:usingKeySignature:;
- (id)defaultAppearanceName;
- (id)nameForAppearanceIdentifier:;
- (void)clearRenditionCache;
- (id)renditionKeyForAssetWithName:withDescription:;
- (id)renditionInfoForIdentifier:;
- (long long)deploymentPlatform;
- (unsigned short)appearanceIdentifierForName:;
- (id)keyFormat;
- (id)renditionKeyForName:;
- (id)renditionKeyForName:cursorHotSpot:;
- (void)_removeRenditionInfoForImageWithName:;
- (long long)maximumRenditionKeyTokenCount;
- (void)_addRenditionInfoForImageWithName:andKey:;
- (void)removeImageNamed:withDescription:;
- (BOOL)canGetRenditionWithKey:;
- (void)removeImagesNamed:;
- (id)initWithIdentifier:;
- (void)insertCGImage:withName:andDescription:;
- (id)imagesWithName:;
- (id)appearances;
@end
