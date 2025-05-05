@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet
- (void)HMDP_setSet:;
- (void)HMDP_minusSet:;
- (void)HMDP_removeObject:;
- (void)HMDP_addObject:;
- (void)HMDP_addObjectsFromArray:;
- (void)HMDP_unionSet:;
- (void)HMDP_intersectSet:;
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)intersectSet:;
- (void)unionSet:;
- (void)addObjectsFromArray:;
- (void)addObject:;
- (void)removeAllObjects;
- (void)removeObject:;
- (void)minusSet:;
- (void)setSet:;
@end
