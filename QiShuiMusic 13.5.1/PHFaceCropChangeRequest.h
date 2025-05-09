@interface PHFaceCropChangeRequest : PHChangeRequest
@property (nonatomic) NSData resourceData;
@property (nonatomic) NSString originatingFaceUUID;
@property (nonatomic) NSString originatingFaceCropUUID;
@property (nonatomic) s type;
@property (nonatomic) PHRelationshipChangeRequestHelper faceHelper;
@property (nonatomic) PHRelationshipChangeRequestHelper personHelper;
@property (nonatomic) s state;
@property (nonatomic) PHObjectPlaceholder placeholderForCreatedFaceCrop;
@property (nonatomic) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (nonatomic) BOOL mutated;
@property (nonatomic) NSString managedEntityName;
@property (nonatomic) NSManagedObjectID objectID;
@property (nonatomic) BOOL clientEntitled;
@property (nonatomic) NSString clientName;
@property (nonatomic) q accessScopeOptionsRequirement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setState:;
- (void)setType:;
- (id)managedEntityName;
- (short)type;
- (short)state;
- (void).cxx_destruct;
- (id)resourceData;
- (void)setFace:;
- (id)initWithUUID:objectID:;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)applyMutationsToManagedObject:photoLibrary:error:;
- (id)initForNewObject;
- (BOOL)validateInsertIntoPhotoLibrary:error:;
- (id)createManagedObjectForInsertIntoPhotoLibrary:error:;
- (id)placeholderForCreatedFaceCrop;
- (void)_prepareFaceHelperIfNeeded;
- (void)_preparePersonHelperIfNeeded;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (void)setResourceData:;
- (id)originatingFaceUUID;
- (void)setOriginatingFaceUUID:;
- (id)originatingFaceCropUUID;
- (void)setOriginatingFaceCropUUID:;
- (id)faceHelper;
- (id)personHelper;
+ (id)changeRequestForFaceCrop:;
+ (id)creationRequestForFaceCropCopyFromFaceCrop:withType:onPerson:;
+ (id)_creationRequestForFaceCropWithOriginatingFace:resourceData:personLocalIdentifier:;
+ (id)_creationRequestForFaceCropWithOriginatingFace:resourceData:person:;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:resourceData:;
+ (void)deleteFaceCrops:;
@end
