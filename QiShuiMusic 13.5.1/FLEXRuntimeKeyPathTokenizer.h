@interface FLEXRuntimeKeyPathTokenizer : NSObject
+ (id)tokenizeString:;
+ (BOOL)allowedInKeyPath:;
+ (unsigned long long)tokenCountOfString:;
+ (id)scanToken:allowed:first:;
+ (id)scanMethodToken:instance:;
@end
