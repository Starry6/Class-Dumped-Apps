@interface SAMICore_AedS2sExtractorCreateParameter : NSObject
@property (nonatomic) r* fileDir;
@property (nonatomic) r* modelDir;
@property (nonatomic) r* configDir;
@property (nonatomic) r* businessType;
@property (nonatomic) float threshold;
- (id)fileDir;
- (id)configDir;
- (id)modelDir;
- (void)setBusinessType:;
- (void)setConfigDir:;
- (void)setFileDir:;
- (void)setModelDir:;
- (float)threshold;
- (id)businessType;
- (void)setThreshold:;
@end
