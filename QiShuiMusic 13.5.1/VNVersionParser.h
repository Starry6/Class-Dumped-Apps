@interface VNVersionParser : NSObject
+ (BOOL)_isSeparatedString:equalToString:atIndex:usingSeparator:;
+ (BOOL)isMajorVersion:equalToMajorVersion:;
+ (BOOL)isMinorVersion:equalToMinorVersion:;
@end
