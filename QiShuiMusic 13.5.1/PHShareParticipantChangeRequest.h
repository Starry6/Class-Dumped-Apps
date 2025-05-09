@interface PHShareParticipantChangeRequest : PHChangeRequest
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) PHRelationshipChangeRequestHelper personHelper;
@property (nonatomic) PHObjectPlaceholder placeholderForCreatedShareParticipant;
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
- (id)emailAddress;
- (short)permission;
- (id)phoneNumber;
- (void)setPermission:;
- (void)setEmailAddress:;
- (void)setPhoneNumber:;
- (id)managedEntityName;
- (void)setRole:;
- (void).cxx_destruct;
- (void)setPerson:;
- (unsigned short)role;
- (short)exitState;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:;
- (id)initWithUUID:objectID:;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)prepareForPhotoLibraryCheck:error:;
- (BOOL)applyMutationsToManagedObject:photoLibrary:error:;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:error:;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (id)personHelper;
- (void)setExitState:;
- (id)placeholderForCreatedShareParticipant;
- (void)_preparePersonIDIfNeeded;
+ (id)changeRequestForShareParticipant:;
+ (id)creationRequestForShareParticipantWithEmailAddress:permission:;
+ (id)creationRequestForShareParticipantWithPhoneNumber:permission:;
+ (void)deleteShareParticipants:;
@end
