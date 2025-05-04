@interface AWELuckyCatPendantBackground : MTLModel
@property (nonatomic) NSString color;
@property (nonatomic) AWELuckyCatPendantIcon pendantIcon;
@property (nonatomic) AWELuckyCatPendantAnimate pendantAnimate;
@property (nonatomic) double alpha;
@property (nonatomic) AWELuckyCatPendantBackgroundStroke stroke;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pendantIcon;
- (void)setPendantIcon:;
- (id)pendantAnimate;
- (void)setPendantAnimate:;
- (void)setAlpha:;
- (id)color;
- (void)setColor:;
- (double)alpha;
- (void).cxx_destruct;
- (void)setStroke:;
- (id)stroke;
+ (id)JSONKeyPathsByPropertyKey;
@end
