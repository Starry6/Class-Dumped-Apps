@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray
- (id)HMDP_objectAtIndex:;
- (id)HMDP_objectsAtIndexes:;
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)getObjects:range:;
- (id)objectsAtIndexes:;
- (id)objectAtIndex:;
- (unsigned long long)count;
@end
