@interface IFColor : NSObject
@property (nonatomic) ^{CGColor=} cgColor;
@property (nonatomic) CIColor ciColor;
@property (nonatomic) NSUUID digest;
- (id)digest;
- (id)initWithCIColor:;
- (id)cgColor;
- (id)initWithWhite:alpha:;
- (id)initWithRed:green:blue:alpha:;
- (id)initWithCGColor:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)ciColor;
- (void).cxx_destruct;
- (id)initWithSystemColor:;
- (id)initWithSystemColor:appearance:contrast:vibrancy:;
+ (id)black;
+ (BOOL)supportsSecureCoding;
+ (id)deviceGreyColorSpace;
+ (id)deviceRGBColorSpace;
+ (id)white;
@end
