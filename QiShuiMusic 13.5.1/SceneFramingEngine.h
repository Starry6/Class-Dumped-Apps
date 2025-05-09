@interface SceneFramingEngine : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} currentTargetViewport;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} defaultViewport;
@property (nonatomic) CinematicFramingSessionOptions options;
@property (nonatomic) CinematicFramingSessionFramingParameters activeFramingParameters;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithFramingSpaceManager:;
- (id)determineSceneFramingForTracks:userViewport:atTime:;
- (id)currentTargetViewport;
- (id)activeFramingParameters;
- (void)setActiveFramingParameters:;
- (id)determineTemporallyStableTargetCropForTracks:userViewport:atTime:;
- (id)determineSceneSummaryForTracks:userViewport:atTime:;
- (void)updateDeadbandToFitScene:tracks:userViewport:atTime:;
- (void)updateDeadbandWithSubjectRect:idealDeadband:slackDeadband:atTime:;
- (void)transitionToFramingState:atTime:;
- (void)clearSubjectHistory;
- (void)updateSubjectMovement:atTime:;
- (BOOL)isSubjectRectStationary:;
- (BOOL)isCurrentFramingIdeal:withTolerance:;
- (id)calculateBaselineViewportForTracks:atTime:;
- (id)calculateSubjectEnclosingRectangleForTracks:withBaselineWidth:userViewport:atTime:maxSubjectRelativeWidthOut:;
- (float)calculateViewportWidthToFitSubjectsInDeadband:;
- (id)calculateViewportCenteredAround:withWidth:;
- (id)computeCroppedSubjectEnclosingRectForViewportWidth:subjectEnclosingRect:;
- (id)determineDeadbandForSubjectEnclosingRect:oldDeadband:newDeadbandWidth:;
- (float)minAllowedScreenWidth;
- (float)minAllowedDeadbandWidth;
- (float)computeViewportWidthFromDeadbandWidth:;
- (id)computeViewportFromDeadband:;
- (float)computeDeadbandWidthFromViewportWidth:;
- (float)computeDeadbandHeightFromViewportHeight:;
- (id)computeDeadbandFromViewport:;
- (float)computeDeadbandHeightForWidth:;
- (float)computeDeadbandWidthForHeight:;
- (id)defaultViewport;
- (void)setDefaultViewport:;
@end
