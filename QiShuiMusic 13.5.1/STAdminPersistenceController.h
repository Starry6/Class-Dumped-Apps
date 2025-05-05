@interface STAdminPersistenceController : STPersistenceController
- (id)init;
- (id)newBackgroundContext;
+ (id)sharedController;
@end
