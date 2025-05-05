@interface CSJLOTShapeRectangle : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) CSJLOTKeyframeGroup position;
@property (nonatomic) CSJLOTKeyframeGroup size;
@property (nonatomic) CSJLOTKeyframeGroup cornerRadius;
@property (nonatomic) BOOL reversed;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)position;
- (id)initWithJSON:;
- (BOOL)reversed;
- (void).cxx_destruct;
- (id)cornerRadius;
- (id)size;
@end
