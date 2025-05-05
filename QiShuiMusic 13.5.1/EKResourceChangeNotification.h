@interface EKResourceChangeNotification : EKNotification
@property (nonatomic) NSDate lastModifiedDate;
@property (nonatomic) NSSet resourceChanges;
- (id)lastModifiedDate;
- (void)setLastModifiedDate:;
- (id)resourceChanges;
- (void)setResourceChanges:;
- (void)addResourceChange:;
- (void)removeResourceChange:;
+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;
@end
