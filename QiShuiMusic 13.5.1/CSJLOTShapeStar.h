@interface CSJLOTShapeStar : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) CSJLOTKeyframeGroup outerRadius;
@property (nonatomic) CSJLOTKeyframeGroup outerRoundness;
@property (nonatomic) CSJLOTKeyframeGroup innerRadius;
@property (nonatomic) CSJLOTKeyframeGroup innerRoundness;
@property (nonatomic) CSJLOTKeyframeGroup position;
@property (nonatomic) CSJLOTKeyframeGroup numberOfPoints;
@property (nonatomic) CSJLOTKeyframeGroup rotation;
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
