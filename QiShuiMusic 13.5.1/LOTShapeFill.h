@interface LOTShapeFill : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) BOOL fillEnabled;
@property (nonatomic) LOTKeyframeGroup color;
@property (nonatomic) LOTKeyframeGroup opacity;
@property (nonatomic) BOOL evenOddFillRule;
- (BOOL)evenOddFillRule;
- (id)keyname;
- (void)_mapFromJSON:;
- (BOOL)fillEnabled;
- (id)initWithJSON:;
- (id)opacity;
- (id)color;
- (void).cxx_destruct;
@end
