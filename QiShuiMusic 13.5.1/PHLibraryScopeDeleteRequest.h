@interface PHLibraryScopeDeleteRequest : PHObjectDeleteRequest
@property (nonatomic) q operation;
@property (nonatomic) BOOL photosctlExpungeOverride;
- (long long)operation;
- (void)setOperation:;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
- (BOOL)photosctlExpungeOverride;
- (void)setPhotosctlExpungeOverride:;
@end
