@interface BRRemoteUserDefaults : NSObject
@property (nonatomic) NSSet excludedFilenamesWorthWarningAtLogout;
@property (nonatomic) NSSet excludedExtensionsWorthPreserving;
@property (nonatomic) q minFileSizeForThumbnailTransfer;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)excludedFilenamesWorthWarningAtLogout;
- (id)excludedExtensionsWorthPreserving;
- (long long)minFileSizeForThumbnailTransfer;
+ (id)sharedDefaults;
+ (id)defaultExcludedFilenamesWorthWarningAtLogout;
+ (id)defaultExcludedFilenamesWorthPreserving;
+ (id)defaultExcludedExtensionsWorthPreserving;
@end
