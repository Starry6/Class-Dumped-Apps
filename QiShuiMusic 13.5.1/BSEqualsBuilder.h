@interface BSEqualsBuilder : NSObject
- (id)init;
- (id)appendArray:counterpart:;
- (id)appendString:counterpart:;
- (id)appendSizeT:counterpart:;
- (id)appendCGSize:counterpart:;
- (id)appendUnsignedInteger:counterpart:;
- (BOOL)isEqual;
- (id)appendEqualsBlocks:;
- (id)appendCGFloat:counterpart:;
- (id)appendInteger:counterpart:;
- (id)appendInt64:counterpart:;
- (id)appendBool:counterpart:;
- (id)appendCGRect:counterpart:;
- (id)appendCGPoint:counterpart:;
- (id)appendDouble:counterpart:;
- (id)appendPointer:counterpart:;
- (id)appendFloat:counterpart:;
- (id)appendObject:counterpart:;
- (id)appendClass:counterpart:;
+ (id)builderWithObject:ofExpectedClass:;
+ (id)builder;
@end
