@interface LynxFontFace : NSObject
- (id)initWithFamilyName:andSrc:;
- (id)srcAtIndex:;
- (unsigned long long)srcCount;
- (void).cxx_destruct;
- (id)getKey;
+ (id)parseSrc:;
@end
