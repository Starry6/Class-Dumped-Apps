@interface BDUGLuckyCrossoverGuideModel : BDUGLuckyJSONModel
@property (nonatomic) BOOL enableShowGuide;
@property (nonatomic) NSString domainId;
@property (nonatomic) q frequencyControlType;
@property (nonatomic) BDUGLuckyCrossoverGuideConfig guideConfig;
- (BOOL)enableShowGuide;
- (void)setGuideConfig:;
- (long long)frequencyControlType;
- (id)guideConfig;
- (void)setEnableShowGuide:;
- (void)setFrequencyControlType:;
- (id)domainId;
- (void).cxx_destruct;
- (void)setDomainId:;
@end
