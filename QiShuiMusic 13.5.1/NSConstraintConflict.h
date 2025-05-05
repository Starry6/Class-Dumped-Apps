@interface NSConstraintConflict : NSObject
@property (nonatomic) NSArray constraint;
@property (nonatomic) NSDictionary constraintValues;
@property (nonatomic) NSManagedObject databaseObject;
@property (nonatomic) NSDictionary databaseSnapshot;
@property (nonatomic) NSArray conflictingObjects;
@property (nonatomic) NSArray conflictingSnapshots;
- (void)dealloc;
- (id)constraint;
- (id)conflictingObjects;
- (void)_doCleanupForXPCStore:context:;
- (id)initWithCoder:;
- (id)debugDescription;
- (id)conflictingSnapshots;
- (id)initWithConstraint:databaseObject:databaseSnapshot:conflictingObjects:conflictingSnapshots:;
- (void)encodeWithCoder:;
- (id)constraintValues;
- (BOOL)_isDBConflict;
- (id)description;
- (id)databaseSnapshot;
- (id)databaseObject;
+ (BOOL)supportsSecureCoding;
@end
