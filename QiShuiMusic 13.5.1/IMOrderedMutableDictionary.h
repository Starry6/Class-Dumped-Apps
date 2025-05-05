@interface IMOrderedMutableDictionary : NSObject
@property (nonatomic) Q count;
- (BOOL)containsKey:;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setOrderedObject:forKey:;
- (id)orderedObjectForKey:;
- (void)removeOrderedObjectForKey:;
- (id)orderedObjects;
- (BOOL)containsOrderedObject:;
@end
