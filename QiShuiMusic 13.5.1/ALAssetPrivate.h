@interface ALAssetPrivate : NSObject
@property (nonatomic) PLManagedAsset photo;
@property (nonatomic) PLPhotoLibrary _photoLibrary;
@property (nonatomic) ALAssetsLibrary library;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL deletable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setIsValid:;
- (void)setLibrary:;
- (id)_photoLibrary;
- (id)library;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)photo;
- (void)setPhoto:;
- (void)_performBlockAndWait:;
- (id)initWithManagedAsset:library:;
- (void)libraryDidChange;
- (void)set_photoLibrary:;
@end
