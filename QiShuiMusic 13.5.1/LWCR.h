@interface LWCR : NSObject
@property (nonatomic) q version;
@property (nonatomic) q constraintCategory;
@property (nonatomic) BOOL hasRequirements;
- (id)init;
- (void)dealloc;
- (long long)version;
- (id)externalRepresentation;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)constraintCategory;
- (BOOL)hasRequirements;
+ (id)withVersion:withConstraintCategory:withRequirements:withError:;
+ (id)withData:withError:;
@end
