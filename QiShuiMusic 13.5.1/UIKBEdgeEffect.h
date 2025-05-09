@interface UIKBEdgeEffect : NSObject
@property (nonatomic) Q edges;
@property (nonatomic) {UIEdgeInsets=dddd} insets;
@property (nonatomic) UIKBGradient gradient;
@property (nonatomic) double opacity;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL renderUnder;
@property (nonatomic) double weight;
@property (nonatomic) BOOL usesRGBColors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOpacity:;
- (void)setGradient:;
- (double)weight;
- (id)gradient;
- (void)setEdges:;
- (void)setWeight:;
- (double)opacity;
- (id)CGColor;
- (void)setInsets:;
- (id)insets;
- (void)renderEffectWithRenderer:traits:;
- (BOOL)usesRGBColors;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)renderUnder;
- (id)description;
- (unsigned long long)edges;
- (BOOL)isEqual:;
- (id)initWithColor:edges:insets:weight:;
- (id)copyWithZone:;
+ (id)effectWithColor:edges:insets:weight:;
+ (id)effectWithColor:edges:inset:weight:;
@end
