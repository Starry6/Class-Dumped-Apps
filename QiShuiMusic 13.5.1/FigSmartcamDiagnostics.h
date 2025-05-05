@interface FigSmartcamDiagnostics : NSObject
- (id)init;
- (void)addSceneConfidences:;
- (void)addPAMDecisionPreliminary:;
- (id)metadata;
- (BOOL)addMotionStats:;
- (BOOL)addClassifierVersionMajor:minor:patch:;
- (void).cxx_destruct;
@end
