@interface CUICommonAssetStorage : NSObject
@property (nonatomic) ^{_carheader=IIIII[128c][256c][16C]IIII} header;
@property (nonatomic) ^{_carextendedMetadata=I[256c][256c][256c][256c]} extendedMetadata;
@property (nonatomic) ^{_renditionkeyfmt=III[0I]} keyfmt;
@property (nonatomic) ^v imagedb;
@property (nonatomic) ^v colordb;
@property (nonatomic) ^v fontdb;
@property (nonatomic) ^v fontsizedb;
@property (nonatomic) ^v facetKeysdb;
@property (nonatomic) ^v bitmapKeydb;
@property (nonatomic) ^v appearancedb;
@property (nonatomic) ^v localizationdb;
@property (nonatomic) NSData globals;
@property (nonatomic) NSDictionary appearances;
- (id)colordb;
- (void)setHeader:;
- (id)path;
- (id)versionString;
- (id)_readAppearances;
- (id)initWithBytes:length:;
- (void)setImagedb:;
- (BOOL)swapped;
- (int)validateBitmapInfo;
- (void)setFacetKeysdb:;
- (void)dealloc;
- (id)initWithPath:forWriting:;
- (BOOL)enumerateKeysAndObjectsUsingBlock:;
- (void)setExtendedMetadata:;
- (unsigned short)localizationIdentifierForName:;
- (BOOL)usesCUISystemThemeRenditionKey;
- (id)imagedb;
- (unsigned int)thinnedWithCoreUIVersion;
- (void)_swapKeyFormat;
- (long long)storageTimestamp;
- (BOOL)assetExistsForKeyData:length:;
- (id)assetKeysMatchingBlock:;
- (void)setLocalizationdb:;
- (void)setExternalTags:;
- (BOOL)hasColorForName:;
- (int)keySemantics;
- (id)uuid;
- (id)deploymentPlatformString;
- (id)localizationdb;
- (id)_swapRenditionKeyToken:;
- (id)renditionNameForKeyBaseList:;
- (id)fontdb;
- (void)setBitmapKeydb:;
- (unsigned int)colorSpaceID;
- (void)_initDefaultHeaderVersion:versionString:;
- (id)nameForAppearanceIdentifier:;
- (id)catalogGlobalData;
- (id)extendedMetadata;
- (id)allAssetKeys;
- (int)validatekeyformat;
- (id)lock;
- (void)setColordb:;
- (id)globals;
- (id)fontsizedb;
- (id)renditionInfoForIdentifier:;
- (long long)deploymentPlatform;
- (id)authoringTool;
- (id)appearancedb;
- (int)validateFile;
- (unsigned int)coreuiVersion;
- (unsigned short)appearanceIdentifierForName:;
- (id)thinningArguments;
- (id)keyfmt;
- (id)keyFormat;
- (void)setFontdb:;
- (void)_swapHeader;
- (void)setGlobals:;
- (void)enumerateRenditionInfosUsingBlock:;
- (BOOL)getColor:forName:;
- (id)keyAttributeIndex;
- (void)setFontsizedb:;
- (void)_buildBitmapInfoIntoDictionary:;
- (BOOL)writeToPath:withTreePageSize:;
- (void)_swapRenditionKeyArray:;
- (void)setAppearancedb:;
- (id)bitmapKeydb;
- (id)assetForKey:;
- (id)localizations;
- (long long)_storagefileTimestamp;
- (id)facetKeysdb;
- (id)renditionNamesWithKeys;
- (BOOL)_commonInitWithStorage:forWritting:;
- (long long)maximumRenditionKeyTokenCount;
- (id)renditionInfoCacheLock;
- (void)_addBitmapIndexForNameIdentifier:attribute:withValue:toDictionary:;
- (id)initWithPath:;
- (id)_bomStorage;
- (id)mainVersionString;
- (id)renditionKeyForName:hotSpot:;
- (id)description;
- (unsigned int)storageVersion;
- (id)_fontValueForFontType:;
- (id)header;
- (id)allRenditionNames;
- (void)setKeyfmt:;
- (void)_loadExtendedMetadata;
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:;
- (unsigned int)associatedChecksum;
- (BOOL)getFontName:baselineOffset:forFontType:;
- (void)_bringHeaderInfoUpToDate;
- (BOOL)getBaselineOffset:forFontType:;
- (id)nameForLocalizationIdentifier:;
- (id)externalTags;
- (id)deploymentPlatformVersion;
- (unsigned int)renditionCount;
- (unsigned int)schemaVersion;
- (void)enumerateBitmapIndexUsingBlock:;
- (BOOL)assetExistsForKey:;
- (id)keyFormatData;
- (id)renditionNameForKeyList:;
- (id)appearances;
- (float)fontSizeForFontSizeType:;
+ (BOOL)isValidAssetStorageWithBytes:length:;
+ (BOOL)isValidAssetStorageWithURL:;
@end
