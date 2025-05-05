@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest
@property (nonatomic) q operation;
- (long long)operation;
- (void)setOperation:;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
@end
