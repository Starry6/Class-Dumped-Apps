@interface AMSMutableSet : NSMutableSet
@property (nonatomic) @? hashBlock;
- (void)addObjectsFromArray:;
- (id)anyObject;
- (BOOL)containsObject:;
- (id)hashBlock;
- (void)addObject:;
- (void)setHashBlock:;
- (id)member:;
- (void).cxx_destruct;
- (id)objectEnumerator;
- (id)allObjects;
- (unsigned long long)count;
- (id)initWithHashBlock:;
- (id)_allObjectsFromBackingSet;
+ (id)setWithHashBlock:;
@end
