@interface LOTShapeCircle : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) LOTKeyframeGroup position;
@property (nonatomic) LOTKeyframeGroup size;
@property (nonatomic) BOOL reversed;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)position;
- (id)initWithJSON:;
- (BOOL)reversed;
- (void).cxx_destruct;
- (id)size;
@end
