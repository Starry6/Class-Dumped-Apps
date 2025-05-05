@interface PLResourceDataStoreManager : NSObject
+ (id)storeExternalResources:forAsset:forLifecycleEvent:error:;
+ (id)storesForLibraryID:;
+ (id)storeForExternalResource:inLibraryWithID:;
+ (id)updateDerivativeResourcesForAsset:forLifecycleEvent:;
@end
