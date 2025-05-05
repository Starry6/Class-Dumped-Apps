@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest
@property (nonatomic) q operation;
@property (nonatomic) BOOL clientEntitledToExpunge;
- (long long)operation;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)validateForDeleteManagedObject:error:;
- (id)initWithUUID:objectID:operation:;
- (BOOL)isClientEntitledToExpunge;
+ (id)deleteRequestForObject:;
+ (id)deleteRequestForObject:operation:;
@end
