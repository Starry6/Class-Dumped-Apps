@interface RTITextStyling : NSObject
@property (nonatomic) NSString fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) NSDictionary attributes;
- (id)initWithCoder:;
- (id)attributes;
- (double)fontWeight;
- (void)encodeWithCoder:;
- (double)fontSize;
- (void).cxx_destruct;
- (id)description;
- (id)fontName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addAttributes:;
+ (BOOL)supportsSecureCoding;
+ (id)textStylingWithFontName:fontSize:fontWeight:;
@end
