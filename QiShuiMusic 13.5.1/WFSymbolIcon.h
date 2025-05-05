@interface WFSymbolIcon : WFIcon
@property (nonatomic) NSString symbolName;
@property (nonatomic) WFColor symbolColor;
@property (nonatomic) WFIconBackground background;
- (id)background;
- (id)symbolName;
- (id)symbolColor;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
- (id)initWithSymbolName:background:;
- (id)initWithSymbolName:symbolColor:background:;
+ (BOOL)supportsSecureCoding;
@end
