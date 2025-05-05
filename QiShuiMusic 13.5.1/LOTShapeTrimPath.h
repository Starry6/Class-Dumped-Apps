@interface LOTShapeTrimPath : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) LOTKeyframeGroup start;
@property (nonatomic) LOTKeyframeGroup end;
@property (nonatomic) LOTKeyframeGroup offset;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)end;
- (id)initWithJSON:;
- (id)start;
- (id)offset;
- (void).cxx_destruct;
@end
