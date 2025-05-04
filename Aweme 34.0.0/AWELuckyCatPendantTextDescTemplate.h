@interface AWELuckyCatPendantTextDescTemplate : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString fontName;
@property (nonatomic) NSString textColor;
@property (nonatomic) BOOL needBold;
@property (nonatomic) Q textSize;
@property (nonatomic) NSString textType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needBold;
- (void)setNeedBold:;
- (void)setFontName:;
- (void)setText:;
- (id)fontName;
- (id)text;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (unsigned long long)textSize;
- (void)setTextType:;
- (id)textType;
- (void)setTextSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
