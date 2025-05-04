@interface AWEImageSharpConfig : NSObject
@property (nonatomic) float wt;
@property (nonatomic) float thr;
@property (nonatomic) float ovrt;
@property (nonatomic) BOOL enableAdaptive;
@property (nonatomic) float g0;
@property (nonatomic) float lc_wt_thr;
- (void)setThr:;
- (void)setOvrt:;
- (void)setEnableAdaptive:;
- (void)setG0:;
- (void)setLc_wt_thr:;
- (float)thr;
- (float)ovrt;
- (float)g0;
- (float)lc_wt_thr;
- (BOOL)enableAdaptive;
- (id)initWithBDConfig:;
- (float)wt;
- (void)setWt:;
+ (id)strongSharpConfig;
+ (id)mediumSharpConfig;
+ (id)weakSharpConfig;
+ (id)veryWeakSharpConfig;
@end
