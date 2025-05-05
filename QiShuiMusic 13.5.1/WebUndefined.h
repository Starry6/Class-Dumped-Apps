@interface WebUndefined : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (id)autorelease;
- (id)release;
- (void)encodeWithCoder:;
- (id)retain;
- (id)description;
- (unsigned long long)retainCount;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)undefined;
@end
