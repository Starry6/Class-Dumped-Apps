@interface PHPersistentObjectChangeDetails : NSObject
@property (nonatomic) q objectType;
@property (nonatomic) NSSet insertedLocalIdentifiers;
@property (nonatomic) NSSet updatedLocalIdentifiers;
@property (nonatomic) NSSet deletedLocalIdentifiers;
- (long long)objectType;
- (void).cxx_destruct;
- (id)initWithObjectType:insertedIdentifiers:updatedIdentifiers:deletedIdentifiers:;
- (id)insertedLocalIdentifiers;
- (id)updatedLocalIdentifiers;
- (id)deletedLocalIdentifiers;
@end
