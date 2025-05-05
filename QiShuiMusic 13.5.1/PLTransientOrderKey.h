@interface PLTransientOrderKey : NSObject
@property (nonatomic) NSManagedObjectContext moc;
@property (nonatomic) q orderValue;
@property (nonatomic) NSManagedObjectID objectID;
- (id)objectID;
- (void)setObjectID:;
- (void).cxx_destruct;
- (id)description;
- (id)childManagedObject;
- (id)secondaryOrderSortKey;
- (long long)orderValue;
- (void)setOrderValue:;
- (id)moc;
- (void)setMoc:;
@end
