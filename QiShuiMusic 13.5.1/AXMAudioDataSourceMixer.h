@interface AXMAudioDataSourceMixer : AXMAudioDataSource
@property (nonatomic) NSString name;
@property (nonatomic) double panning;
@property (nonatomic) NSSet dataSources;
@property (nonatomic) BOOL isMonoOutput;
- (id)dataSources;
- (void)setName:;
- (void)addDataSource:;
- (void)removeDataSource:;
- (void)setDataSources:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithName:sampleRate:circular:;
- (void)setCurrentSampleIndex:;
- (void)removeAllDataSources;
- (void)prepareNextSamples:;
- (BOOL)isMonoOutput;
- (double)panning;
- (void)setPanning:;
@end
