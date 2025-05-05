@interface CSJLOTShapeStroke : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) BOOL fillEnabled;
@property (nonatomic) CSJLOTKeyframeGroup color;
@property (nonatomic) CSJLOTKeyframeGroup opacity;
@property (nonatomic) CSJLOTKeyframeGroup width;
@property (nonatomic) CSJLOTKeyframeGroup dashOffset;
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
