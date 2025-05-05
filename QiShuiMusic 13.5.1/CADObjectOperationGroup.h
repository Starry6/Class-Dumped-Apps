@interface CADObjectOperationGroup : CADOperationGroup
- (void)CADObject:getNumberPropertyWithName:reply:;
- (void)CADObject:getRelatedObjectWithRelationName:reply:;
- (void)CADObject:getRelatedObjectsWithRelationName:reply:;
- (void)CADObject:getDataPropertyWithName:reply:;
- (void)CADObjectExists:reply:;
- (void)CADObject:getSecurityScopedURLWrapperPropertyWithName:reply:;
- (void)CADObjectsExist:reply:;
- (void)CADObjectIsManaged:reply:;
- (void)CADObject:getPropertiesWithNames:reply:;
- (void)CADObject:getPropertyWithName:reply:;
- (void)CADObject:getStringPropertyWithName:reply:;
- (void)CADObjects:getPropertiesWithNames:reply:;
- (void)CADObject:getDatePropertyWithName:reply:;
+ (BOOL)requiresEventAccess;
@end
