@interface WBSCyclerExtensionsTestSuite : NSObject
@property (nonatomic) NSArray operations;
@property (nonatomic) BOOL finished;
@property (nonatomic) WBSCyclerIterationCounter iterationCounter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operations;
- (void).cxx_destruct;
- (void)runWithTarget:completionHandler:;
- (id)iterationCounter;
- (void)setIterationCounter:;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:;
@end
