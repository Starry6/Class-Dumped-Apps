@interface WBSDKJKArray : NSMutableArray
- (void)getObjects:range:;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void)insertObject:atIndex:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (id)objectAtIndex:;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (id)copyWithZone:;
+ (id)allocWithZone:;
@end
