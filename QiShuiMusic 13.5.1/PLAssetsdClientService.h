@interface PLAssetsdClientService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addPhotoLibraryUnavailabilityHandler:;
- (void)downloadStatusForIdentifier:progress:completed:data:error:;
- (void)libraryBecameUnavailable:reason:;
- (void).cxx_destruct;
@end
