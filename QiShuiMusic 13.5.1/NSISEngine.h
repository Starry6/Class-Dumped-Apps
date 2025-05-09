@interface NSISEngine : NSObject
@property (nonatomic) NSMutableArray variablesWithValueRestrictionViolations;
@property (nonatomic) NSISVariable artificialRowHead;
@property (nonatomic) NSISVariable artificialObjectiveRowHead;
@property (nonatomic) NSISObjectiveLinearExpression artificialObjectiveRowBody;
@property (nonatomic) <NSISEngineDelegate> delegate;
@property (nonatomic) BOOL shouldIntegralize;
@property (nonatomic) BOOL revertsAfterUnsatisfiabilityHandler;
@property (nonatomic) Q variableChangeCount;
@property (nonatomic) BOOL optimizationInProgress;
@property (nonatomic) {CGSize=dd} engineScalingCoefficients;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)debugQuickLookObject;
- (void)_setUIKitEngineTrackingOn:;
- (BOOL)_UIKitEngineTrackingOn;
- (void)_UIKitPerformPendingChangeNotifications;
- (unsigned long long)_UIKitRowCount;
- (unsigned long long)rowCount;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (int)nsis_orientationHintForVariable:;
- (BOOL)nsis_valueOfVariableIsUserObservable:;
- (id)constraints;
- (void)nsis_valueOfVariable:didChangeInEngine:;
- (id)delegate;
- (unsigned long long)variableChangeCount;
- (id)description;
- (id)nsis_descriptionOfVariable:;
- (void)verifyInternalIntegrity;
- (void)stopObservingChangesForVariable:;
- (BOOL)hasValue:forVariable:;
- (void)startObservingChangesForVariable:;
- (void)setShouldIntegralize:;
- (id)candidateRedundantConstraints;
- (void)setEngineScalingCoefficients:;
- (id)traceState;
- (unsigned long long)pivotCount;
- (void)performPendingChangeNotifications;
- (void)withAutomaticOptimizationDisabled:;
- (BOOL)exerciseAmbiguityInVariable:;
- (id)engineScalingCoefficients;
- (id)observableForVariable:;
- (void)removeObservableForVariable:;
- (BOOL)valueOfVariableIsAmbiguous:;
- (double)valueForVariable:;
- (id)constraintsAffectingValueOfVariable:;
- (BOOL)isObservingChangesForVariable:;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (double)integralizationAdjustmentForMarker:;
- (BOOL)shouldIntegralize;
- (BOOL)isTrackingVariableChanges;
- (void)performPendingChangeNotificationsForItem:;
- (void)performModifications:withUnsatisfiableConstraintsHandler:;
- (id)engineVarIndexForVariable:;
- (id)variableForEngineVarIndex:;
- (int)valueRestrictionForEngineVarIndex:;
- (void)beginRecording;
- (id)recordedCommandsData;
- (unsigned long long)replayCommandsData:verifyingIntegrity:;
- (unsigned long long)optimize;
- (unsigned long long)_optimizeWithoutRebuilding;
- (void)withBehaviors:performModifications:;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:;
- (void)withDelegateCallsDisabled:;
- (BOOL)hasValueForPossiblyDeallocatedVariable:;
- (double)valueForExpression:;
- (BOOL)hasValue:forExpression:;
- (BOOL)containsVariable:;
- (void)enumerateRows:;
- (void)beginBookkeepingForVariableIfNeeded:;
- (void)endBookkeepingForVariableIfUnused:;
- (BOOL)tryToAddConstraintWithMarker:expression:integralizationAdjustment:mutuallyExclusiveConstraints:;
- (BOOL)tryToAddConstraintWithMarker:expression:mutuallyExclusiveConstraints:;
- (void)addVariableToBeOptimized:priority:;
- (void)removeVariableToBeOptimized:priority:;
- (void)changeVariableToBeOptimized:fromPriority:toPriority:;
- (BOOL)containsConstraintWithMarker:;
- (void)removeConstraintWithMarker:;
- (void)constraintDidChangeSuchThatMarker:shouldBeReplacedByMarkerPlusDelta:;
- (BOOL)tryToChangeConstraintSuchThatMarker:isReplacedByMarkerPlusDelta:undoHandler:;
- (BOOL)hasObservableForVariable:;
- (id)variableChangeTransactionSignal;
- (unsigned long long)colCount;
- (BOOL)isOptimizationInProgress;
- (id)allVariableValues;
- (id)variablesWithValueRestrictionViolations;
- (void)setVariablesWithValueRestrictionViolations:;
- (BOOL)revertsAfterUnsatisfiabilityHandler;
- (void)setRevertsAfterUnsatisfiabilityHandler:;
- (id)artificialRowHead;
- (void)setArtificialRowHead:;
- (id)artificialObjectiveRowHead;
- (void)setArtificialObjectiveRowHead:;
- (id)artificialObjectiveRowBody;
- (void)setArtificialObjectiveRowBody:;
+ (BOOL)_dbg_anyEngineContainsVariable:;
+ (BOOL)enableEngineTrace;
+ (id)traceFileSuffix;
+ (void)setEnableEngineTrace:;
+ (void)setLogOnInvalidUseFromBGThread:;
+ (void)setTraceFileSuffix:;
@end
