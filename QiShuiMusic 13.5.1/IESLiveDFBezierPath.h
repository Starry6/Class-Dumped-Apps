@interface IESLiveDFBezierPath : NSObject
- (id)initWithCGPath:;
- (unsigned long long)countSubpaths;
- (void)enumerateSubpaths:;
- (void)extractSubpaths:;
- (id)pointAtPercent:ofSubpath:;
- (id)pointAtPercentOfLength:;
- (void)dealloc;
- (double)length;
+ (id)bezierPathWithCGPath:;
@end
