@interface NSSQLModel : NSStoreMapping
- (id)initWithManagedObjectModel:configurationName:brokenHashVersion:;
- (id)initWithManagedObjectModel:configurationName:;
- (id)managedObjectModel;
- (id)configurationName;
- (void)dealloc;
- (id)initWithManagedObjectModel:configurationName:retainHashHack:;
- (id)entityForID:;
- (id)entityNamed:;
- (BOOL)_generateModel:error:;
@end
