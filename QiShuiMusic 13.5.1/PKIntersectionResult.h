@interface PKIntersectionResult : NSObject
@property (nonatomic) NSOrderedSet intersectedStrokes;
@property (nonatomic) q intersectionAlgorithmType;
@property (nonatomic) q contentType;
- (void)setContentType:;
- (long long)contentType;
- (void).cxx_destruct;
- (id)intersectedStrokes;
- (void)setIntersectedStrokes:;
- (long long)intersectionAlgorithmType;
- (void)setIntersectionAlgorithmType:;
+ (id)noResult;
@end
