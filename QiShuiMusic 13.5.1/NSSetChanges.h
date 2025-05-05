@interface NSSetChanges : NSMutableSet
@property (nonatomic) Q changeCount;
- (void)HMDP_removeObject:;
- (void)HMDP_addObject:;
- (unsigned long long)changeCount;
- (void)addChange:;
- (void)addObject:;
- (void)removeObject:;
- (BOOL)_isToManyChangeInformation;
- (void)enumerateChangesUsingBlock:;
- (void)enumerateChanges:usingBlock:;
- (long long)_toManyPropertyType;
- (void)applyChangesToSet:;
+ (id)allocWithZone:;
@end
