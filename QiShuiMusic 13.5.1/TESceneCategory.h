@interface TESceneCategory : NSObject
@property (nonatomic) double prob;
@property (nonatomic) BOOL satisfied;
- (BOOL)satisfied;
- (void)setSatisfied:;
- (double)prob;
- (void)setProb:;
@end
