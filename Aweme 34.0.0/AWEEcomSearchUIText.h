@interface AWEEcomSearchUIText : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) double fontSize;
@property (nonatomic) NSString color;
@property (nonatomic) NSString darkColor;
@property (nonatomic) BOOL isBold;
@property (nonatomic) NSArray padding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)padding;
- (double)fontSize;
- (BOOL)isBold;
- (void)setText:;
- (id)color;
- (id)text;
- (void)setColor:;
- (void)setFontSize:;
- (void)setPadding:;
- (void).cxx_destruct;
- (void)setIsBold:;
- (id)darkColor;
- (void)setDarkColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
