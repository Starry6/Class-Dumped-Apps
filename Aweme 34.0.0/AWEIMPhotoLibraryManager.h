@interface AWEIMPhotoLibraryManager : NSObject
@property (nonatomic) PHCachingImageManager cachingManager;
@property (nonatomic) NSObject<OS_dispatch_queue> notifyQueue;
@property (nonatomic) NSHashTable observers;
@property (nonatomic) AWEIMAlbumAssetCache cache;
@property (nonatomic) BOOL fetchOptimize;
@property (nonatomic) NSMutableDictionary livePhotoRequestIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeAllChangeObserver;
- (BOOL)p_isCameraRollAlbum:;
- (BOOL)p_isRecentlyDeleteAlbum:;
- (BOOL)p_isHiddenAlbum:;
- (id)syncGetCameraRollAssetsWithType:sortStyle:BPEAKey:ascending:;
- (id)syncGetAssetsFromCollection:withType:sortStyle:BPEAKey:ascending:;
- (void)setFetchOptimize:;
- (id)syncFetchCachedAssetsWithCacheKey:;
- (void)getCameraRollAssetsWithType:sortStyle:BPEAKey:ascending:useCache:completion:;
- (id)loadCameraRollAssetCollectionWithBPEAKey:;
- (id)p_fetchPHAssetsResultWithType:sortStyle:collection:BPEAKey:ascending:limitCount:;
- (id)getCameraRollAssetsFromLibraryWithType:sortStyle:BPEAKey:ascending:limitCount:;
- (id)livePhotoRequestIDs;
- (BOOL)fetchOptimize;
- (void)p_notifyObserversWithChange:;
- (id)cachedCameraRollAssetsWithType:sortStyle:ascending:;
- (void)getCameraRollAssetsWithType:sortStyle:BPEAKey:ascending:completion:;
- (void)asyncGetCameraRollAssetsFromLibraryWithType:sortStyle:BPEAKey:ascending:limitCount:completion:;
- (void)asyncLoadAllOrganizedAlbumsWithSortType:filterTypes:BPEAKey:assetAscending:complete:;
- (id)cachingManager;
- (void)setCachingManager:;
- (void)setLivePhotoRequestIDs:;
- (void)unregisterChangeObserver:;
- (id)notifyQueue;
- (void)setCache:;
- (void)registerChangeObserver:;
- (id)cache;
- (id)init;
- (id)observers;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:;
- (void)setObservers:;
- (void)setNotifyQueue:;
+ (void)requestVideoResourceForLivePhoto:targetPath:complete:;
+ (BOOL)isLivePhoto:;
+ (void)requestPhotoLibraryPermissionWithScene:completion:;
+ (BOOL)isSlomoVideo:;
+ (void)requestPhotoLibraryPermissionWithBPEAKey:completion:;
+ (id)getPhotoRequestBPEAKey;
+ (void)fetchSlowMotionResouceUsingNetworkByAsset:sizeGenerator:BPEAKey:complete:;
+ (int)requestLivePhotoForAsset:targetSize:BPEAKey:contentMode:options:resultHandler:;
+ (BOOL)hasPhotoLibraryPermission;
+ (void)requestAuthorizationWithScene:completion:;
+ (void)requestAuthorizationWithToken:completion:;
+ (void)requestAuthorizationWithBPEAKey:completion:;
+ (id)tokenCertWithBPEAKey:;
+ (long long)authorizationStatus;
+ (id)sharedInstance;
@end
