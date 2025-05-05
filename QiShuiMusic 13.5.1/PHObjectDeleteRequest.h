@interface PHObjectDeleteRequest : PHChangeRequest
@property (nonatomic) NSString managedEntityName;
@property (nonatomic) NSManagedObjectID objectID;
@property (nonatomic) BOOL clientEntitled;
@property (nonatomic) NSString clientName;
@property (nonatomic) q accessScopeOptionsRequirement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)objectID;
- (id)init;
- (id)clientName;
- (id)uuid;
- (id)managedEntityName;
- (void).cxx_destruct;
- (id)initWithUUID:objectID:;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)isClientEntitled;
- (id)initForNewObject;
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
- (id)initWithUUID:request:objectID:;
+ (id)deleteRequestForObject:;
+ (id)deleteRequestsForObjects:ofType:forSelector:;
+ (id)_deleteRequestsForObjects:;
@end
