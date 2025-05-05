@interface EKPersistentExceptionDate : EKPersistentObject
- (void)setOwner:;
- (id)owner;
- (id)date;
- (int)entityType;
- (void)setDate:;
- (id)description;
- (id)copyWithZone:;
+ (id)relations;
+ (Class)meltedClass;
@end
