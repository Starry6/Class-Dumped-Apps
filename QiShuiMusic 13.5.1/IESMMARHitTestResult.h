@interface IESMMARHitTestResult : NSObject
@property (nonatomic) ARHitTestResult innerResult;
@property (nonatomic) Q type;
@property (nonatomic) double distance;
@property (nonatomic) {?=[4]} localTransform;
@property (nonatomic) {?=[4]} worldTransform;
@property (nonatomic) IESMMARAnchor anchor;
- (void)setInnerResult:;
- (id)initWithARHitTestResult:;
- (id)innerResult;
- (double)distance;
- (id)anchor;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)localTransform;
- (id)worldTransform;
+ (unsigned long long)arTypeFor:;
+ (unsigned long long)iesTypeFor:;
@end
