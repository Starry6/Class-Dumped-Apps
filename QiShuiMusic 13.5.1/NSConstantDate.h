@interface NSConstantDate : NSDate
- (id)init;
- (void)dealloc;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)autorelease;
- (id)release;
- (id)retain;
- (BOOL)_tryRetain;
- (double)timeIntervalSinceReferenceDate;
- (unsigned long long)retainCount;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)new;
@end
