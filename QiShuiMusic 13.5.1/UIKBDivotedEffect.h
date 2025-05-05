@interface UIKBDivotedEffect : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL renderUnder;
@property (nonatomic) double weight;
@property (nonatomic) BOOL usesRGBColors;
@property (nonatomic) UIKBGradient gradient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)weight;
- (id)gradient;
- (void)setWeight:;
- (id)CGColor;
- (void)renderEffectWithRenderer:traits:;
- (BOOL)usesRGBColors;
- (BOOL)isValid;
- (BOOL)renderUnder;
- (id)copyWithZone:;
@end
