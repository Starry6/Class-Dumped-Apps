@interface STUniquedManagedObject : NSManagedObject
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSUUID sortKey;
- (id)computeUniqueIdentifier;
- (void)awakeFromInsert;
- (id)dictionaryRepresentation;
- (void)updateUniqueIdentifier;
@end
