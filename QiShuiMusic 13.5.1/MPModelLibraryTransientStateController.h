@interface MPModelLibraryTransientStateController : NSObject
- (id)init;
- (void)performDeleteEntityChangeRequest:withRelatedModelObjects:completion:;
- (void)unregisterTransientState:;
- (void)addOperation:;
- (void)performLibraryImportChangeRequest:withRelatedModelObjects:completion:;
- (void)performLibraryImportChangeRequest:withRelatedModelObjects:;
- (void)performKeepLocalChangeRequest:withRelatedModelObjects:completion:;
- (id)registerTransientKeepLocalState:forModelObjects:relatedModelObjects:;
- (long long)transientAddStateForModelObject:;
- (void).cxx_destruct;
- (void)performDeleteEntityChangeRequest:withRelatedModelObjects:;
- (long long)transientKeepLocalStateForModelObject:;
- (id)registerTransientAddState:forModelObjects:relatedModelObjects:;
- (void)performKeepLocalChangeRequest:withRelatedModelObjects:;
+ (id)sharedDeviceLibraryController;
@end
