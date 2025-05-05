@interface CRSUIWallpaper : NSObject
@property (nonatomic) NSString wallpaperAssetCatalogName;
@property (nonatomic) NSString thumbnailAssetCatalogName;
@property (nonatomic) NSString wallpaperIdentifier;
@property (nonatomic) BOOL supportsDynamicAppearance;
@property (nonatomic) BOOL supportsDashboardPlatterMaterials;
@property (nonatomic) BOOL iconLabelsRequireBackground;
- (id)wallpaperColor;
- (id)wallpaperIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWallpaperIdentifier:;
- (id)wallpaperImageCompatibleWithTraitCollection:;
- (id)thumbnailImageCompatibleWithTraitCollection:;
- (id)thumbnailColor;
- (BOOL)supportsDynamicAppearance;
- (BOOL)supportsDashboardPlatterMaterials;
- (BOOL)iconLabelsRequireBackground;
- (id)wallpaperAssetCatalogName;
- (void)setWallpaperAssetCatalogName:;
- (id)thumbnailAssetCatalogName;
- (void)setThumbnailAssetCatalogName:;
+ (id)_wallpaperInfo;
@end
