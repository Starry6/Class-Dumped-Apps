@interface STUniquedManagedObjectDelta : NSObject
@property (nonatomic) NSMutableSet updatedProperties;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) q changeType;
- (void)deleted;
- (long long)changeType;
- (id)initWithUniqueIdentifier:;
- (id)uniqueIdentifier;
- (void)inserted;
- (void).cxx_destruct;
- (id)updatedProperties;
- (void)setUpdatedProperties:;
- (void)updatedWithProperties:;
- (void)removePropertyWithName:;
@end
