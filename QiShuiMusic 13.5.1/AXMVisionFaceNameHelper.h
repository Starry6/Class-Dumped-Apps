@interface AXMVisionFaceNameHelper : NSObject
@property (nonatomic) VNPersonsModel _personsModel;
@property (nonatomic) NSDate _personsModelFileModifiedDate;
@property (nonatomic) NSMutableDictionary _personLocalIdentifierToName;
@property (nonatomic) double _lastFileModificationCheckTime;
- (void)_resetState;
- (void).cxx_destruct;
- (id)_personsModel;
- (id)_photoAuthorizationMessage:;
- (unsigned long long)faceprintRequestRevisionForPersonsModel;
- (id)photoLibraryWithURL:;
- (id)_filePathForPersonsModelWithPhotoLibraryURL:;
- (BOOL)_loadPersonsModelWithPhotoLibraryURL:;
- (BOOL)_shouldReloadPersonsModelWithPhotoLibraryURL:;
- (BOOL)_checkPhotoLibraryAuthorization;
- (id)_fileModificationDateForPath:;
- (id)_fetchPersonsForLocalIdentifiers:withPhotoLibraryURL:;
- (BOOL)prepareForLookupWithPhotoLibraryURL:;
- (id)nameForFaceObservation:;
- (BOOL)_isDeviceUnlocked;
- (void)set_personsModel:;
- (id)_personsModelFileModifiedDate;
- (void)set_personsModelFileModifiedDate:;
- (id)_personLocalIdentifierToName;
- (void)set_personLocalIdentifierToName:;
- (double)_lastFileModificationCheckTime;
- (void)set_lastFileModificationCheckTime:;
@end
