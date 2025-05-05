@interface VESkeletonDetectData : VEAlgorithmResultData
@property (nonatomic) q ID;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) NSArray points;
- (void)setID:;
- (long long)ID;
- (id)rect;
- (id)init;
- (void)setRect:;
- (void).cxx_destruct;
- (id)points;
- (void)setPoints:;
@end
