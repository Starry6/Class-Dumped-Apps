@interface HMDFDConfig : HMDTrackerConfig
@property (nonatomic) NSInteger sampleInterval;
@property (nonatomic) double fdWarnRate;
@property (nonatomic) NSInteger maxFD;
- (double)fdWarnRate;
- (id)getModule;
- (int)maxFD;
- (void)setFdWarnRate:;
- (void)setMaxFD:;
- (void)setSampleInterval:;
- (int)sampleInterval;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
