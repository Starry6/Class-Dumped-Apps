@interface IPARectArray : NSObject
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)initWithRect:;
- (id)description;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (id)copyWithZone:;
- (void)enumerateRects:;
- (id)rectAtIndex:;
- (id)initWithRectArray:;
+ (id)rectArray;
+ (id)rectArrayWithRect:;
@end
