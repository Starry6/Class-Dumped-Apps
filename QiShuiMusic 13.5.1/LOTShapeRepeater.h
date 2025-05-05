@interface LOTShapeRepeater : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) LOTKeyframeGroup copies;
@property (nonatomic) LOTKeyframeGroup offset;
@property (nonatomic) LOTKeyframeGroup anchorPoint;
@property (nonatomic) LOTKeyframeGroup scale;
@property (nonatomic) LOTKeyframeGroup position;
@property (nonatomic) LOTKeyframeGroup rotation;
@property (nonatomic) LOTKeyframeGroup startOpacity;
@property (nonatomic) LOTKeyframeGroup endOpacity;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)position;
- (id)initWithJSON:;
- (id)anchorPoint;
- (id)offset;
- (void).cxx_destruct;
- (id)rotation;
- (id)scale;
- (id)copies;
- (id)startOpacity;
- (id)endOpacity;
@end
