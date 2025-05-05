@interface PHMemoryDeleteRequest : PHObjectDeleteRequest
@property (nonatomic) BOOL clientEntitledToMemoryMutation;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
- (BOOL)clientEntitledToMemoryMutation;
@end
