@interface VESkeletonPoint : NSObject
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) BOOL isDetect;
@property (nonatomic) double score;
- (BOOL)isDetect;
- (void)setIsDetect:;
- (void)setX:;
- (double)score;
- (void)setY:;
- (double)y;
- (double)x;
- (void)setScore:;
@end
