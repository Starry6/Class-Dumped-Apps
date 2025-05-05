@interface NSPathStore2 : NSString
- (unsigned short)HMDP_characterAtIndex:;
- (id)_stringByResolvingSymlinksInPathUsingCache:;
- (id)stringByExpandingTildeInPath;
- (id)stringByDeletingLastPathComponent;
- (id)copy;
- (unsigned short)characterAtIndex:;
- (id)lastPathComponent;
- (id)stringByAppendingPathExtension:;
- (id)pathExtension;
- (void)getCharacters:range:;
- (id)stringByAppendingPathComponent:;
- (id)_fastCharacterContents;
- (id)stringByStandardizingPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (unsigned long long)hash;
- (id)stringByDeletingPathExtension;
- (id)pathComponents;
- (id)stringByResolvingSymlinksInPath;
- (id)_stringByStandardizingPathUsingCache:;
- (unsigned long long)length;
- (BOOL)isEqualToString:;
- (BOOL)isAbsolutePath;
- (id)copyWithZone:;
+ (id)pathWithComponents:;
+ (id)pathStoreWithCharacters:length:;
@end
