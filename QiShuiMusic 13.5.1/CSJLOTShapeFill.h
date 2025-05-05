@interface CSJLOTShapeFill : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) BOOL fillEnabled;
@property (nonatomic) CSJLOTKeyframeGroup color;
@property (nonatomic) CSJLOTKeyframeGroup opacity;
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
