@interface STCloudActivation : STUniquedManagedObject
@property (nonatomic) q activationType;
@property (nonatomic) NSData activationPlist;
@property (nonatomic) NSString ckRecordID;
@property (nonatomic) NSData ckRecordSystemFields;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSUUID sortKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)didChangeValueForKey:;
- (id)dictionaryRepresentation;
+ (BOOL)reconcileWithManagedObjectContext:andUpdateLosers:error:;
@end
