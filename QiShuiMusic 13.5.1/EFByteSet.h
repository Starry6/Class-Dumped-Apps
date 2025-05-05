@interface EFByteSet : NSObject
- (id)initWithBytes:length:;
- (id)init;
- (id)initWithRange:;
- (id)initWithCString:;
- (id)description;
- (id)mutableCopyWithZone:;
- (id).cxx_construct;
- (id)copyWithZone:;
- (BOOL)byteIsMember:;
+ (id)asciiWhitespaceSet;
@end
