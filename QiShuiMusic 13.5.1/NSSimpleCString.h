@interface NSSimpleCString : NSString
- (id)HMDP_stringByAppendingString:;
- (unsigned short)HMDP_characterAtIndex:;
- (void)dealloc;
- (unsigned short)characterAtIndex:;
- (id)_fastCStringContents:;
- (unsigned long long)cStringLength;
- (void)getCharacters:range:;
- (unsigned long long)smallestEncoding;
- (unsigned long long)hash;
- (BOOL)getBytes:maxLength:usedLength:encoding:options:range:remainingRange:;
- (id)_newSubstringWithRange:zone:;
- (BOOL)hasSuffix:;
- (unsigned long long)length;
- (unsigned long long)fastestEncoding;
- (BOOL)isEqualToString:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)stringByAppendingString:;
- (long long)compare:options:range:;
- (BOOL)canBeConvertedToEncoding:;
- (BOOL)hasPrefix:;
- (id)initWithCStringNoCopy:length:;
+ (id)allocWithZone:;
@end
