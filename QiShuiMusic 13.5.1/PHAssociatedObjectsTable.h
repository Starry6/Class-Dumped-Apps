@interface PHAssociatedObjectsTable : NSObject
@property (nonatomic) q stripeCount;
- (id)init;
- (void)setAssociatedObject:onObject:forKey:;
- (id)setAssociatedObjectIfNotSet:onObject:forKey:;
- (long long)stripeCount;
- (id)associatedObjectOnObject:forKey:;
- (void).cxx_destruct;
- (void)removeAllAssociatedObjectsOnObject:;
- (void)removeAssociatedObjectOnObject:forKey:;
@end
