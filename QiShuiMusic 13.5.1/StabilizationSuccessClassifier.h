@interface StabilizationSuccessClassifier : NSObject
@property (nonatomic) NSInteger classifierMode;
@property (nonatomic) Q subsegmentLength;
@property (nonatomic) Q subsegmentStep;
@property (nonatomic) float lastClassifierScore;
- (id)init;
- (float)calcLogisticForStats:paramsForStats:error:;
- (id)getSequentialParamDict;
- (id)getTripodCorrectionParamDict;
- (id)getSequentialAnalysisCoeffsDict;
- (id)getDefaultParamDict;
- (void)AddStats:toDict:withBaseName:;
- (id)calcStatsDictForArray:withKey:firstIndex:lastIndex:usingTempStorage:outErr:;
- (id)statsDictFromFrameArray:firstIndex:lastIndex:errorOut:;
- (BOOL)testForHomographies:movieSize:firstIndex:lastIndex:scoreThreshold:errorOut:verbose:;
- (id)applyClassifierToOverlappedSegments:withCoefficientsDict:movieSize:firstIndex:lastIndex:stride:length:result:verbose:minThreshold:;
- (id)classifySequentialAnalysisSuccess:movieSize:precalcedFeatures:result:;
- (int)classifierMode;
- (void)setClassifierMode:;
- (unsigned long long)subsegmentLength;
- (void)setSubsegmentLength:;
- (unsigned long long)subsegmentStep;
- (void)setSubsegmentStep:;
- (float)lastClassifierScore;
@end
