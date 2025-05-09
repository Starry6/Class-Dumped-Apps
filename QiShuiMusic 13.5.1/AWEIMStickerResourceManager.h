@interface AWEIMStickerResourceManager : NSObject
@property (nonatomic) IESIMSaaSmoticonThemePackageResponseModel themePackage;
@property (nonatomic) NSMutableDictionary downloadStatus;
@property (nonatomic) NSArray localThemes;
@property (nonatomic) BOOL hasMigratingDone;
@property (nonatomic) NSLock migratingLock;
@property (nonatomic) IESIMSaaSmoticonThemePackageResponseModel privateThemePackageResponseModel;
@property (nonatomic) NSMapTable sessionMapTable;
@property (nonatomic) NSArray stickerEmoticonInfoModels;
- (id)sessionMapTable;
- (void)setLocalThemes:;
- (id)stickerFilesDir;
- (void)addCommentRecentlyUsedEmoticonsDataWithModel:theme:;
- (id)animateStickerPathFromThemeID:sticker:;
- (BOOL)checkThemeExistence:;
- (void)fetchStickerPackageWithThemeID:downloadURL:saveToUpdateDir:;
- (void)fetchStickerPackagesIfUpdated:;
- (BOOL)hasMigratingDone;
- (id)imMessageRecentlyUsedKeyWithType:;
- (BOOL)isFileExistAtPath:;
- (id)localThemes;
- (id)migratingLock;
- (id)normalizeDecimalNumber:;
- (void)p_deleteOutdatedThemeFiles;
- (void)p_fetchStickerInfoWithContext:;
- (id)p_generateThemePackageResponseModel;
- (id)p_getEmoticonThemeModelByID:;
- (id)p_getLocalIMStickerInfoPath;
- (id)p_getLocalIMStickerPack:;
- (id)p_getLocalIMStickerThemeInfoJSON:;
- (id)p_getLocalIMStickerZip:;
- (id)p_getUpdatedIMStickerPack:;
- (BOOL)p_isFileExistAtPath:;
- (void)p_migrateUpdateThemeFiles;
- (void)p_reportDownLoadResultForID:result:;
- (id)privateThemePackageResponseModel;
- (id)recentIMMessageUserStickersWithType:;
- (id)recentUserStickers;
- (void)resetRecentlyEmoticons:WithType:;
- (void)setHasMigratingDone:;
- (void)setMigratingLock:;
- (void)setPrivateThemePackageResponseModel:;
- (void)setSessionMapTable:;
- (void)setThemePackage:;
- (id)staticStickerPathFromThemeID:sticker:;
- (id)stickerEmoticonInfoModels;
- (id)stickerRootDir;
- (id)stickerUpdateDir;
- (id)stickerZipDir;
- (id)themePackage;
- (void)updateIMMessageRecentUsedEmoticon:withType:sessionType:;
- (void)updateLocalThemeFilesWithContext:;
- (void)updateRecentUsedEmoticon:;
- (void).cxx_destruct;
- (id)downloadStatus;
- (void)setDownloadStatus:;
+ (id)sharedManager;
@end
