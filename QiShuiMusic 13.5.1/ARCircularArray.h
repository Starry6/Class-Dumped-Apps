@interface ARCircularArray : NSObject
@property (nonatomic) NSArray allObjects;
@property (nonatomic) Q count;
@property (nonatomic) @ firstObject;
@property (nonatomic) @ lastObject;
- (id)firstObject;
- (BOOL)containsObject:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)objectAtIndexedSubscript:;
- (id)addObject:;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)count;
- (id)lastObject;
- (id)initWithCapacity:;
- (unsigned long long)indexOfObject:inSortedRange:options:usingComparator:;
@end
