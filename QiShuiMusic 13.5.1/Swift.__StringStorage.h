@interface Swift.__StringStorage : Swift.__SwiftNativeNSString
@property (nonatomic) q length;
@property (nonatomic) Q hash;
@property (nonatomic) Q fastestEncoding;
- (unsigned short)characterAtIndex:;
- (id)_fastCStringContents:;
- (void)getCharacters:range:;
- (unsigned long long)hash;
- (id)UTF8String;
- (long long)length;
- (unsigned long long)fastestEncoding;
- (char)isEqualToString:;
- (char)isEqual:;
- (id)copyWithZone:;
- (id)cStringUsingEncoding:;
- (char)getCString:maxLength:encoding:;
- (id)init;
@end
