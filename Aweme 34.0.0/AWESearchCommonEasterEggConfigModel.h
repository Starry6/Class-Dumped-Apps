@interface AWESearchCommonEasterEggConfigModel : AWEBaseApiModel
@property (nonatomic) Q type;
@property (nonatomic) q loopTimes;
@property (nonatomic) double autoplayTime;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) NSString eggID;
@property (nonatomic) NSString token;
@property (nonatomic) double containerMargin;
- (long long)loopTimes;
- (void)setContainerMargin:;
- (void)setLoopTimes:;
- (id)eggID;
- (void)setEggID:;
- (double)containerMargin;
- (void)setAutoplayTime:;
- (double)autoplayTime;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (double)containerWidth;
- (double)containerHeight;
- (void)setContainerHeight:;
- (void)setContainerWidth:;
+ (id)JSONKeyPathsByPropertyKey;
@end
