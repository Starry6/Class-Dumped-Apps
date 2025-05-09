@interface UIFeedbackGenerator : NSObject
@property (nonatomic) BOOL muted;
@property (nonatomic) q activationCount;
@property (nonatomic) q externalActivationCount;
@property (nonatomic) BOOL usesCustomActivation;
@property (nonatomic) <UICoordinateSpace> coordinateSpace;
@property (nonatomic) UIView view;
@property (nonatomic) _UIFeedbackGeneratorConfiguration configuration;
@property (nonatomic) NSSet engines;
@property (nonatomic) <UICoordinateSpace> effectiveCoordinateSpace;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double autoDeactivationTimeout;
@property (nonatomic) BOOL autoDeactivated;
@property (nonatomic) NSString _stats_key;
- (id)_stats_key;
- (BOOL)_isEnabled;
- (void)_activated;
- (void)setCoordinateSpace:;
- (id)coordinateSpace;
- (id)_ui_descriptionBuilder;
- (id)init;
- (id)initWithCoordinateSpace:;
- (void)dealloc;
- (void)_playFeedback:;
- (id)initWithConfiguration:coordinateSpace:;
- (void)prepare;
- (void)deactivate;
- (double)_preparationTimeoutForStyle:;
- (id)_configuration;
- (id)view;
- (void)_deactivated;
- (id)engines;
- (void).cxx_destruct;
- (id)description;
- (void)activateWithCompletionBlock:;
- (void)setView:;
- (id)initWithConfiguration:;
- (BOOL)isActive;
- (void)_stopFeedback:;
- (void)_setConfiguration:;
- (id)initWithConfiguration:view:;
- (id)_effectiveCoordinateSpace;
- (BOOL)_isAutoDeactivated;
- (id)_preparationTimerForStyle:;
- (void)_setPreparationTimer:forStyle:;
- (void)_prepareWithStyle:;
- (void)_updatePreparationTimer:withTimeout:;
- (void)_stopPreparationForStyle:;
- (void)_stopPreparationForAllStyles;
- (void)_setupForFeedback:;
- (void)_activateWithStyle:completionBlock:;
- (void)__activateWithStyle:forFeedback:completionBlock:;
- (void)_setupEnginesIfNeededForFeedback:;
- (void)_updateActivationStateForRemovedEngines:addedEngines:prewarmCount:turnOnCount:;
- (void)_scheduleFeedbackWarming;
- (void)_startFeedbackWarming;
- (void)_stopFeedbackWarming;
- (void)_deactivateWithStyle:;
- (void)__deactivateWithStyle:;
- (void)_forceDeactivationForStyle:;
- (double)_autoDeactivationTimeout;
- (void)_setupAutoDeactivateTimer;
- (void)_resetAutoDeactivationTimeout;
- (void)_stopAutoDeactivateTimer;
- (void)_autoDeactivate;
- (void)_clientDidUpdateGeneratorWithSelector:;
- (void)performFeedbackWithDelay:insideBlock:;
- (void)_playFeedback:withMinimumIntervalPassed:since:prefersRegularPace:;
- (void)_setOutputMode:;
- (long long)_outputMode;
- (long long)activationCount;
- (void)setActivationCount:;
- (long long)externalActivationCount;
- (void)setExternalActivationCount:;
- (BOOL)usesCustomActivation;
- (void)setUsesCustomActivation:;
- (void)_setMuted:;
- (BOOL)_isMuted;
- (id)_statsSuffix;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (id)_activationTimeOutCountStatistics;
- (id)_preparationCountStatistics;
- (id)_playCountStatistics;
- (void)_stats_activationDidChangeTo:;
- (void)_stats_activationTimedOut;
- (void)_stats_prepared;
- (void)_stats_playedFeedback;
+ (Class)_configurationClass;
+ (void)_setAutoDeactivateTimeout:;
+ (void)_resetAutoDeactivateTimeout;
+ (void)_setPreparationTimeout:forStyle:;
+ (void)_resetPreparationTimeouts;
+ (void)_setRunningTests:;
+ (id)_defaultCoordinateSpace;
+ (id)behaviorWithConfiguration:coordinateSpace:;
+ (id)behaviorWithCoordinateSpace:;
@end
