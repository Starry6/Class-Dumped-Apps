@interface PHPersonDeleteRequest : PHObjectDeleteRequest
@property (nonatomic) BOOL force;
- (BOOL)force;
- (void)setForce:;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
@end
