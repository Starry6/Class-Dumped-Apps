@interface IntersectionObserverEntry : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} relativeRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingClientRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} intersectionRect;
@property (nonatomic) float intersectionRatio;
@property (nonatomic) BOOL isIntersecting;
@property (nonatomic) double time;
@property (nonatomic) NSString relativeToId;
- (id)boundingClientRect;
- (float)intersectionRatio;
- (BOOL)isIntersecting;
- (id)rectToDictionary:;
- (id)relativeToId;
- (void)setBoundingClientRect:;
- (void)setIntersectionRatio:;
- (void)setIsIntersecting:;
- (void)setRelativeToId:;
- (void)setTime:;
- (id)toDictionary;
- (double)time;
- (void)update;
- (id)relativeRect;
- (void)setRelativeRect:;
- (void)setIntersectionRect:;
- (id)intersectionRect;
@end
