@interface AWESECRouteReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_handleRouteEvent:;
- (void)_handleWebEvent:;
- (void)_reportPerformanceIfNeeded:;
- (void)_reportFeaturedTracesIfNeeded:;
- (void)_reportTessaSample:;
- (void)_reportHybridTessaSample:;
- (void)_reportFeaturedTrace:withFeatureNames:sampleRate:;
- (id)_convertIntoUniTraceItem:;
- (void)_reportPerformance:;
- (id)hybridTracesFromNative:;
- (id)buildHybridTracesReport:;
- (id)buildSingleHybridTraceReport:;
- (id)_executeExprWithOverviewFeature:withEvents:;
- (id)_executeExprWithFeatures:withTrace:;
- (id)featureNames:;
- (id)_buildOverviewParams:;
- (id)_executeExprWithFeature:withParams:;
- (id)_executeExprWithFeatuers:withHybridTrace:;
- (void)handleEvent:;
- (id)subscriberId;
@end
