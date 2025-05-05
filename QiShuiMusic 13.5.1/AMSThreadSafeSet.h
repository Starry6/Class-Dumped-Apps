@interface AMSThreadSafeSet : NSObject
@property (nonatomic) AMSThreadSafeObject backingSet;
@property (nonatomic) NSArray allObjects;
@property (nonatomic) Q count;
- (id)init;
- (void)setBackingSet:;
- (void)addObject:;
- (void)removeObject:;
- (id)backingSet;
- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)count;
@end
