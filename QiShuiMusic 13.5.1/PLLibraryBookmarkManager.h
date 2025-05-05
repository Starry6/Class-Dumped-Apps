@interface PLLibraryBookmarkManager : NSObject
- (id)init;
- (void)removeSSBForLibraryURL:;
- (void)dealloc;
- (void)_loadFromDefaults;
- (id)_activeURLForClientLibraryURL:;
- (void)removeInvalidSSBsExcept:;
- (id)sandboxExtensionsByPathForClient:pathManager:;
- (id)allKnownLibraryURLs;
- (void)_removeActiveURLForPathKey:;
- (void)_storeSecurityScopedURL:pathKey:;
- (id)newSandboxExtensionDataForClient:path:writable:;
- (void).cxx_destruct;
- (void)_saveToDefaults;
- (id)URLFromClientLibraryURL:sandboxExtension:error:;
- (void)_importLithiumAccessRights;
- (void)_removeSSBForPathKey:;
+ (id)_securityScopedURLWithURL:sandboxExtension:;
+ (id)resolveSecurityScopedBookmark:isStale:error:;
+ (id)sharedBookmarkManager;
@end
