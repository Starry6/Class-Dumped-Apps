@interface MPPropertySet : NSObject
@property (nonatomic) NSSet properties;
@property (nonatomic) NSDictionary relationships;
@property (nonatomic) BOOL empty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEmpty;
- (id)_stateDumpObject;
- (id)propertySetByIntersectingWithPropertySet:;
- (id)initWithProperties:relationships:;
- (id)initWithCoder:;
- (id)debugDescription;
- (id)relationships;
- (void)encodeWithCoder:;
- (id)propertySetByCombiningWithPropertySet:;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsPropertySet:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)emptyPropertySet;
+ (BOOL)supportsSecureCoding;
+ (id)propertySetWithProperties:;
@end
