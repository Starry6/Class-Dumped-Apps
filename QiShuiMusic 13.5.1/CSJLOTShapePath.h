@interface CSJLOTShapePath : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) BOOL closed;
@property (nonatomic) NSNumber index;
@property (nonatomic) CSJLOTKeyframeGroup shapePath;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)initWithJSON:;
- (id)index;
- (void).cxx_destruct;
- (BOOL)closed;
- (id)shapePath;
@end
