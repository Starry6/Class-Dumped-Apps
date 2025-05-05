@interface MPMutablePropertySet : MPPropertySet
- (id)init;
- (id)initWithProperties:relationships:;
- (void)addProperty:;
- (void)addRelationship:properties:;
- (void)removeProperty:;
- (void)removeRelationship:;
- (id)copyWithZone:;
+ (id)new;
@end
