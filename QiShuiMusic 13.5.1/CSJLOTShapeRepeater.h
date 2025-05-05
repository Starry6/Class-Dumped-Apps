@interface CSJLOTShapeRepeater : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) CSJLOTKeyframeGroup copies;
@property (nonatomic) CSJLOTKeyframeGroup offset;
@property (nonatomic) CSJLOTKeyframeGroup anchorPoint;
@property (nonatomic) CSJLOTKeyframeGroup scale;
@property (nonatomic) CSJLOTKeyframeGroup position;
@property (nonatomic) CSJLOTKeyframeGroup rotation;
@property (nonatomic) CSJLOTKeyframeGroup startOpacity;
@property (nonatomic) CSJLOTKeyframeGroup endOpacity;
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
