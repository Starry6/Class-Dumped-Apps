@interface NSRLEArray : NSObject
- (id)init;
- (void)_makeNewListFrom:;
- (void)dealloc;
- (id)objectAtIndex:effectiveRange:runIndex:;
- (id)objectAtRunIndex:length:;
- (id)objectAtIndex:effectiveRange:;
- (id)description;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (id)initWithRefCountedRunArray:;
- (id)copyWithZone:;
@end
