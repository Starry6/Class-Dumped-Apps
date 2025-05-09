@interface CBAODModule : CBModule
@property (nonatomic) BOOL aodEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)removeHIDServiceClient:;
- (void)handleNotificationForKey:withProperty:;
- (BOOL)addHIDServiceClient:;
- (BOOL)handleHIDEvent:from:;
- (void)dealloc;
- (void)scheduleDisplayModeCompletionTimerIn:forDisplayMode:;
- (void)start;
- (BOOL)setDisplayFactor:transitionLength:;
- (id)copyPropertyForKey:withParameter:;
- (void)stop;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (BOOL)handleDisplayModeUpdate:;
- (void)releaseDisplayModeCompletionTimer;
- (BOOL)performUpdate;
- (void)checkBootArgsConfiguration;
- (void)sendNotificationForKey:andValue:;
- (BOOL)performUpdate:;
- (id)initWithCBBrtControl:andQueue:;
- (id)copyModulesPropertyForKey:;
- (BOOL)setModulesProperty:forKey:;
- (void)addModule:;
- (BOOL)handleFlipBookStatePropertyHandler:;
- (BOOL)handleDisplayNitsOverridePropertyHandler:;
- (BOOL)handleAABSensorOverridePropertyHandler:;
- (void)handleSystemDidWakeFromSleepPropertyHandler:;
- (BOOL)performUpdate:forceUpdate:;
- (BOOL)performUpdate:forceUpdate:rampDoneCallback:rampCanceledCallback:;
- (BOOL)performUpdateWithTransitionParameters:;
- (BOOL)performUpdateWithTransitionParameters:rampDoneCallback:rampCanceledCallback:;
- (BOOL)handleDisplayModeUpdate:transitionLength:;
- (BOOL)updateAODState:transitionParameters:brightnessFactor:forDisplayMode:;
- (void)prepareForEnterToAODRoutine;
- (void)enteringAODRoutineForDisplayMode:transitionParameters:;
- (void)onAODRoutineForDisplayMode:;
- (void)enteringSuppressedAODRoutineWithTransitionParameters:;
- (void)onSuppresedAODRoutine;
- (void)exitingAODRoutineForDisplayMode:transitionParameters:;
- (void)offAODRoutineForDisplayMode:;
- (void)didCompleteTransitionToDisplayMode:;
- (id)copyModulesInfo:;
- (id)copyModulesIdentifiers;
- (id)copyModulesExtendedIdentifiers;
- (void)updateModulesAODState:;
- (void)updateModulesAODState:context:;
- (void)updateModulesAODState:transitionParameters:;
- (void)updateModulesAODState:transitionParameters:context:;
- (BOOL)handleHIDEvent:from:transitionLength:forceUpdate:;
- (BOOL)handleHIDEvent:from:transitionParameters:;
- (BOOL)handleALSEvent:transitionParameters:;
- (BOOL)copyAndHandleEvent;
- (BOOL)copyAndHandleEventWithTransitionLength:;
- (BOOL)copyAndHandleEventWithTransitionLength:forceUpdate:;
- (BOOL)copyAndHandleEventWithTransitionParameters:;
- (float)getFloatValueFrom:key:;
- (float)getFloatValueFrom:key:subkey:;
- (long long)getIntegerValueFrom:key:;
- (BOOL)setALSServiceProperty:forKey:;
- (void)loadAODCurveFromDefaults;
- (id)copyArrayFromPrefsForKey:;
- (void)reevaluatePThresholdsForLux:;
- (id)stringForFlipbookMode:;
- (BOOL)aodEnabled;
- (void)setAodEnabled:;
@end
