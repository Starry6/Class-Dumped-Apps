@interface IESVideoAddEdgeData : NSObject
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;
@property (nonatomic) {CGSize=dd} targetFrameSize;
@property (nonatomic) q addEdgeMode;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoFrameRect;
- (void)setAddEdgeMode:;
- (long long)addEdgeMode;
- (id)edgeModeDataToDic;
- (void)setVideoFrameRect:;
- (id)videoFrameRect;
- (id)init;
- (double)red;
- (double)blue;
- (void)setRed:;
- (void)setAlpha:;
- (void)setGreen:;
- (void)setBlue:;
- (double)green;
- (double)alpha;
- (id)targetFrameSize;
- (void)setTargetFrameSize:;
+ (id)videoEdgeModeDataFromDic:;
@end
