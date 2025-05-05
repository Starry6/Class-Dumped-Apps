@interface INImageFilePersistence : NSObject
@property (nonatomic) NSArray _supportedClasses;
@property (nonatomic) NSString serviceIdentifier;
@property (nonatomic) Q servicePriority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)servicePriority;
- (id)_deleteItemAtFilePath:;
- (id)serviceIdentifier;
- (void)_setSupportedClasses:;
- (void)retrieveImageWithIdentifier:completion:;
- (id)storeImage:scaled:qualityOfService:storeType:error:;
- (id)_supportedClasses;
- (void)purgeExpiredImagesInEphemeralStore;
- (id)_filePathForImageWithFileName:;
- (BOOL)canStoreImage:;
- (void).cxx_destruct;
- (void)purgeImageWithIdentifier:completion:;
@end
