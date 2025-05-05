@interface LOTShapeTransform : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) LOTKeyframeGroup position;
@property (nonatomic) LOTKeyframeGroup anchor;
@property (nonatomic) LOTKeyframeGroup scale;
@property (nonatomic) LOTKeyframeGroup rotation;
@property (nonatomic) LOTKeyframeGroup opacity;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)anchor;
- (id)position;
- (id)initWithJSON:;
- (id)opacity;
- (void).cxx_destruct;
- (id)description;
- (id)rotation;
- (id)scale;
@end
