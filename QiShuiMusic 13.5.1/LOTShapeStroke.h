@interface LOTShapeStroke : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) BOOL fillEnabled;
@property (nonatomic) LOTKeyframeGroup color;
@property (nonatomic) LOTKeyframeGroup opacity;
@property (nonatomic) LOTKeyframeGroup width;
@property (nonatomic) LOTKeyframeGroup dashOffset;
@property (nonatomic) Q capType;
@property (nonatomic) Q joinType;
@property (nonatomic) NSArray lineDashPattern;
- (unsigned long long)capType;
- (id)keyname;
- (void)_mapFromJSON:;
- (BOOL)fillEnabled;
- (id)initWithJSON:;
- (id)opacity;
- (unsigned long long)joinType;
- (id)color;
- (id)width;
- (void).cxx_destruct;
- (id)lineDashPattern;
- (id)dashOffset;
@end
