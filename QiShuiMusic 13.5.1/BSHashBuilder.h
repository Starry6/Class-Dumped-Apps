@interface BSHashBuilder : NSObject
- (id)appendObject:;
- (id)appendInteger:;
- (id)appendBool:;
- (id)appendInt64:;
- (id)appendBytes:length:;
- (id)appendString:;
- (id)appendPoint:;
- (id)appendCGFloat:;
- (unsigned long long)hash;
- (id)appendHashingBlocks:;
- (id)appendDouble:;
- (id)appendSize:;
- (id)appendRect:;
- (id)appendCGPoint:;
- (id)appendClass:;
- (id)appendCGSize:;
- (id)appendSizeT:;
- (id)appendPointer:;
- (id)appendFloat:;
- (id)appendUnsignedInteger:;
- (id)appendArray:;
- (id)appendCGRect:;
+ (id)builder;
@end
