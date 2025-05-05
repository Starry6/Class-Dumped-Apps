@interface LOTShapeStar : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) LOTKeyframeGroup outerRadius;
@property (nonatomic) LOTKeyframeGroup outerRoundness;
@property (nonatomic) LOTKeyframeGroup innerRadius;
@property (nonatomic) LOTKeyframeGroup innerRoundness;
@property (nonatomic) LOTKeyframeGroup position;
@property (nonatomic) LOTKeyframeGroup numberOfPoints;
@property (nonatomic) LOTKeyframeGroup rotation;
@property (nonatomic) Q type;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)innerRoundness;
- (id)numberOfPoints;
- (id)outerRoundness;
- (id)position;
- (id)initWithJSON:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)rotation;
- (id)outerRadius;
- (id)innerRadius;
@end
