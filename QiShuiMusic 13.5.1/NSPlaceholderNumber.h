@interface NSPlaceholderNumber : NSPlaceholderValue
- (id)initWithUnsignedInteger:;
- (id)initWithChar:;
- (id)init;
- (id)initWithUnsignedLong:;
- (id)initWithLong:;
- (id)initWithUnsignedChar:;
- (id)initWithCoder:;
- (id)initWithUnsignedLongLong:;
- (id)initWithBool:;
- (id)initWithUnsignedShort:;
- (id)initWithDouble:;
- (id)initWithFloat:;
- (id)initWithShort:;
- (id)initWithInt:;
- (id)initWithInteger:;
- (id)initWithLongLong:;
- (id)initWithUnsignedInt:;
+ (BOOL)supportsSecureCoding;
@end
