@interface NSPlaceholderValue : NSNumber
- (id)init;
- (void)dealloc;
- (void)getValue:size:;
- (id)initWithBytes:objCType:;
- (void)getValue:;
- (id)objCType;
- (BOOL)_isDeallocating;
- (id)initWithCoder:;
- (id)autorelease;
- (id)release;
- (id)retain;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
+ (BOOL)supportsSecureCoding;
@end
