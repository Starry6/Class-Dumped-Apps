@interface AWEECOMIMMsgFoldFinalABConfig : NSObject
@property (nonatomic) AWEECOMIMMsgFoldABConfig normalAB;
@property (nonatomic) AWEECOMIMMsgFoldABConfig precisionAB;
@property (nonatomic) AWEECOMIMMsgFoldABConfig validAB;
@property (nonatomic) BOOL usingPrecisionAB;
@property (nonatomic) BOOL featureEnable;
- (BOOL)foldEnableWithFoldGroupKey:;
- (BOOL)featureEnable;
- (void)setNormalAB:;
- (void)setPrecisionAB:;
- (id)normalAB;
- (void)setValidAB:;
- (void)setUsingPrecisionAB:;
- (id)precisionAB;
- (id)validAB;
- (id)initWithNormalAB:precisionAB:;
- (BOOL)usingPrecisionAB;
- (void).cxx_destruct;
+ (id)finalABConfigFromAB;
@end
