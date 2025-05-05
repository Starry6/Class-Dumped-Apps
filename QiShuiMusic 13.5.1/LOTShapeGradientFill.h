@interface LOTShapeGradientFill : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) NSNumber numberOfColors;
@property (nonatomic) LOTKeyframeGroup startPoint;
@property (nonatomic) LOTKeyframeGroup endPoint;
@property (nonatomic) LOTKeyframeGroup gradient;
@property (nonatomic) LOTKeyframeGroup opacity;
@property (nonatomic) BOOL evenOddFillRule;
@property (nonatomic) Q type;
- (BOOL)evenOddFillRule;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)endPoint;
- (id)startPoint;
- (id)initWithJSON:;
- (id)gradient;
- (id)opacity;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)numberOfColors;
@end
