@interface CRSUIWallpaperPreferences : NSObject
@property (nonatomic) CRPairedVehicleManager vehicleManager;
@property (nonatomic) CRVehicle vehicle;
@property (nonatomic) CRSUIWallpaper currentWallpaper;
- (id)init;
- (void).cxx_destruct;
- (id)vehicle;
- (void)setVehicle:;
- (id)vehicleManager;
- (void)setVehicleManager:;
- (id)currentWallpaper;
- (void)setCurrentWallpaper:;
+ (id)availableWallpapers;
+ (id)defaultWallpaper;
+ (id)wallpaperWithIdentifier:;
+ (id)_wallpaperWithIdentifier:;
@end
