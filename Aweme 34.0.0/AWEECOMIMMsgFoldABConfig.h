@interface AWEECOMIMMsgFoldABConfig : NSObject
@property (nonatomic) BOOL isInExperiment;
@property (nonatomic) BOOL featureEnable;
@property (nonatomic) BOOL defaultFoldEnable;
@property (nonatomic) NSMutableDictionary foldEnableMap;
- (BOOL)foldEnableWithFoldGroupKey:;
- (BOOL)featureEnable;
- (void)setIsInExperiment:;
- (void)setFeatureEnable:;
- (void)setFoldEnableMap:;
- (id)foldEnableMap;
- (void)setDefaultFoldEnable:;
- (BOOL)defaultFoldEnable;
- (BOOL)isInExperiment;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
