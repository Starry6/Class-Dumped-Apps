@interface AWENearbyGrouponControlInfo : AWEBaseApiModel
@property (nonatomic) NSNumber topCardIdx;
@property (nonatomic) NSDictionary taskConfig;
@property (nonatomic) NSNumber insertCardIndex;
@property (nonatomic) NSNumber halfScreenAnimationLimit;
@property (nonatomic) NSDictionary frequencyData;
- (id)taskConfig;
- (void)setTaskConfig:;
- (id)insertCardIndex;
- (void)setInsertCardIndex:;
- (id)frequencyData;
- (void)setFrequencyData:;
- (id)topCardIdx;
- (id)halfScreenAnimationLimit;
- (void)setTopCardIdx:;
- (void)setHalfScreenAnimationLimit:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
