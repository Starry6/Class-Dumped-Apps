@interface NSConstantData : NSData
- (id)initWithBytesNoCopy:length:;
- (BOOL)_copyWillRetain;
- (BOOL)_isCompact;
- (id)initWithBytes:length:;
- (id)init;
- (void)dealloc;
- (id)copy;
- (BOOL)_providesConcreteBacking;
- (id)bytes;
- (BOOL)_isDeallocating;
- (id)autorelease;
- (id)initWithBytesNoCopy:length:freeWhenDone:;
- (id)release;
- (id)retain;
- (id)initWithBytes:length:copy:deallocator:;
- (BOOL)_tryRetain;
- (id)initWithData:;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)new;
@end
