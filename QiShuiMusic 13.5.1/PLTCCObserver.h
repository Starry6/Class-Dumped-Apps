@interface PLTCCObserver : NSObject
- (id)_systemPhotoLibrary;
- (void)registerAsTCCObserver;
- (void).cxx_destruct;
- (id)initWithLibraryBundleController:;
- (void)_handleTCCEvent:auth_record:;
@end
