@interface AWEPerfFMPCalculateConfig : NSObject
@property (nonatomic) double rateThreshold;
@property (nonatomic) double pixelDiffThreshold;
@property (nonatomic) BOOL isInnerViewFMPEnabled;
@property (nonatomic) NSArray meaningfulClassNames;
@property (nonatomic) double timeThreshold;
@property (nonatomic) BOOL isEnableFMPViewDiff;
- (void)setRateThreshold:;
- (void)setPixelDiffThreshold:;
- (void)setMeaningfulClassNames:;
- (double)rateThreshold;
- (double)pixelDiffThreshold;
- (BOOL)isInnerViewFMPEnabled;
- (void)setIsInnerViewFMPEnabled:;
- (id)meaningfulClassNames;
- (BOOL)isEnableFMPViewDiff;
- (void)setIsEnableFMPViewDiff:;
- (void).cxx_destruct;
- (void)setTimeThreshold:;
- (double)timeThreshold;
@end
