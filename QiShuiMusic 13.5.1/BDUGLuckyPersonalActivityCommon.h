@interface BDUGLuckyPersonalActivityCommon : BDUGLuckyBDModel
@property (nonatomic) BDUGLuckyTimeTable timeTable;
@property (nonatomic) BOOL canshow;
- (BOOL)canshow;
- (void)setCanshow:;
- (void)setTimeTable:;
- (id)timeTable;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
