@interface TIKeyboardSecureCandidateRGBColor : NSObject
@property (nonatomic) double colorR;
@property (nonatomic) double colorG;
@property (nonatomic) double colorB;
@property (nonatomic) double colorA;
- (void)setColorA:;
- (void)setColorB:;
- (id)initWithR:G:B:A:;
- (id)initWithCoder:;
- (double)colorR;
- (void)setColorR:;
- (void)encodeWithCoder:;
- (double)colorA;
- (id)description;
- (double)colorG;
- (double)colorB;
- (BOOL)isEqual:;
- (void)setColorG:;
- (id)copyWithZone:;
+ (id)lightGrayColor;
+ (BOOL)supportsSecureCoding;
+ (id)blackColor;
+ (id)whiteColor;
@end
