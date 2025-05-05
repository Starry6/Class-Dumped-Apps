@interface JDErrorSimulation : NSObject
- (id)initWithConstErrorMean:constErrorStd:framePercentageErrorStd:;
- (id)constErrorForSpot:echo:inBank:;
- (void)injectErrorsToPointCloud:;
@end
