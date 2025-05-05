@interface VNMutablePersonsModel : VNPersonsModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)writeToURL:options:error:;
- (void).cxx_destruct;
- (id)description;
- (id)upToDateFaceModelWithCanceller:error:;
- (id)initWithConfiguration:;
- (void)personsModelDataWasModified:;
- (BOOL)writeVersion1ToOutputStream:options:md5Context:error:;
- (BOOL)writeReadOnlyVersion1ToOutputStream:options:md5Context:error:;
- (BOOL)_getModelWritingImplementation:selector:version:forOptions:;
- (BOOL)writeToStream:options:error:;
- (id)dataWithOptions:error:;
- (BOOL)addFaceObservations:toPersonWithUniqueIdentifier:error:;
- (BOOL)removeFaceObservations:fromPersonWithUniqueIdentifier:error:;
- (BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:error:;
- (BOOL)removePersonWithUniqueIdentifier:error:;
+ (id)newModelFromVersion:objects:error:;
+ (id)_version1ModelWithObjects:error:;
+ (id)supportedWriteVersions;
@end
