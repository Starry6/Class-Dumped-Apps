@interface STTestSyncableObject : STUniquedManagedObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSSet subobjects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)didChangeValueForKey:;
- (id)dictionaryRepresentation;
+ (id)fetchOrCreateWithDictionaryRepresentation:inContext:error:;
+ (id)serializableClassName;
@end
