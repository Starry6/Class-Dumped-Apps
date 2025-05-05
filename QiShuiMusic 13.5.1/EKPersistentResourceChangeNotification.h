@interface EKPersistentResourceChangeNotification : EKPersistentNotification
- (id)lastModifiedDate;
- (void)setLastModifiedDate:;
- (int)entityType;
- (id)resourceChanges;
- (void)setResourceChanges:;
+ (id)relations;
+ (Class)meltedClass;
@end
