@interface VCPDefaultPhotoLibraryManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)closedefaultPhotoLibrary;
- (id)defaultPhotoLibrary;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:;
+ (id)sharedManager;
@end
