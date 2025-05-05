@interface CSJLOTShapeTransform : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) CSJLOTKeyframeGroup position;
@property (nonatomic) CSJLOTKeyframeGroup anchor;
@property (nonatomic) CSJLOTKeyframeGroup scale;
@property (nonatomic) CSJLOTKeyframeGroup rotation;
@property (nonatomic) CSJLOTKeyframeGroup opacity;
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
