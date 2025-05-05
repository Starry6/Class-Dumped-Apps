@interface PLColorSpace : NSObject
@property (nonatomic) NSString colorSpaceName;
- (id)colorSpaceName;
- (id)initWithName:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setColorSpaceName:;
+ (id)colorSpaceFromName:;
+ (id)commonColorSpace_sRGB;
+ (id)commonColorSpace_unspecified;
+ (id)commonColorSpace_displaySpace;
@end
