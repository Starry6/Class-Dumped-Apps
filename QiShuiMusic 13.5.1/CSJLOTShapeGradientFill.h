@interface CSJLOTShapeGradientFill : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) NSNumber numberOfColors;
@property (nonatomic) CSJLOTKeyframeGroup startPoint;
@property (nonatomic) CSJLOTKeyframeGroup endPoint;
@property (nonatomic) CSJLOTKeyframeGroup gradient;
@property (nonatomic) CSJLOTKeyframeGroup opacity;
@property (nonatomic) BOOL evenOddFillRule;
@property (nonatomic) Q type;
- (BOOL)evenOddFillRule;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)endPoint;
- (id)startPoint;
- (id)initWithJSON:;
- (id)gradient;
- (id)opacity;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)numberOfColors;
@end
