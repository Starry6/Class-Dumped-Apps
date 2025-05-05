@interface NSCheapMutableString : NSMutableString
- (unsigned short)HMDP_characterAtIndex:;
- (void)dealloc;
- (void)setContentsNoCopy:length:freeWhenDone:isUnicode:;
- (unsigned short)characterAtIndex:;
- (unsigned long long)cStringLength;
- (void)getCharacters:range:;
- (BOOL)getBytes:maxLength:usedLength:encoding:options:range:remainingRange:;
- (id)lossyCString;
- (id)cString;
- (unsigned long long)length;
- (unsigned long long)fastestEncoding;
@end
