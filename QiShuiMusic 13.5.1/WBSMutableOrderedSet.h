@interface WBSMutableOrderedSet : NSObject
@property (nonatomic) NSArray array;
- (id)init;
- (void)removeObjectsInArray:;
- (BOOL)containsObject:;
- (id)array;
- (void)addObject:;
- (void)removeObject:;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (id)initWithMaximumCount:;
- (id)objectAtIndexWithoutAffectingRecency:;
- (void)markObjectAsRecentlyUsed:;
- (void)_moveObjectAtIndexToLast:;
@end
