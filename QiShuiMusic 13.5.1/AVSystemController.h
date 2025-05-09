@interface AVSystemController : NSObject
- (BOOL)currentRouteHasVolumeControl;
- (id)init;
- (void)dealloc;
- (id)errorWithCode:description:;
- (id)pickableRoutesForCategory:andMode:;
- (BOOL)setAttribute:forKey:error:;
- (BOOL)getVolume:forCategory:;
- (id)attributeForKey:;
- (BOOL)changeActiveCategoryVolumeBy:fallbackCategory:resultVolume:affectedCategory:;
- (BOOL)changeActiveCategoryVolume:fallbackCategory:resultVolume:affectedCategory:;
- (BOOL)setVibeIntensityTo:;
- (BOOL)getVibeIntensity:;
- (BOOL)changeActiveCategoryVolumeBy:;
- (BOOL)changeActiveCategoryVolume:;
- (BOOL)setActiveCategoryVolumeTo:fallbackCategory:resultVolume:affectedCategory:;
- (BOOL)setActiveCategoryVolumeTo:;
- (BOOL)getActiveCategoryVolume:andName:fallbackCategory:;
- (BOOL)getActiveCategoryVolume:andName:;
- (BOOL)changeActiveCategoryVolumeBy:forRoute:andDeviceIdentifier:;
- (BOOL)changeActiveCategoryVolume:forRoute:andDeviceIdentifier:;
- (BOOL)setActiveCategoryVolumeTo:forRoute:andDeviceIdentifier:;
- (BOOL)getActiveCategoryVolume:andName:forRoute:andDeviceIdentifier:;
- (BOOL)changeVolumeForRouteBy:forCategory:mode:route:deviceIdentifier:andRouteSubtype:;
- (BOOL)changeVolumeForRoute:forCategory:mode:route:deviceIdentifier:andRouteSubtype:;
- (BOOL)setVolumeForRouteTo:forCategory:mode:route:deviceIdentifier:andRouteSubtype:;
- (BOOL)getVolumeForRoute:forCategory:mode:route:deviceIdentifier:andRouteSubtype:;
- (int)volumeCategoryAndMode:mode:outCategory:outMode:;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)toggleActiveCategoryMutedForRoute:andDeviceIdentifier:;
- (BOOL)getActiveCategoryMuted:;
- (BOOL)getActiveCategoryMuted:forRoute:andDeviceIdentifier:;
- (BOOL)changeVolumeBy:forCategory:;
- (BOOL)changeVolume:forCategory:;
- (BOOL)changeVolume:forCategory:mode:;
- (BOOL)setVolumeTo:forCategory:;
- (BOOL)setVolumeTo:forCategory:mode:;
- (BOOL)setBTHFPRoute:availableForVoicePrompts:;
- (BOOL)didCancelRoutePicking:;
- (BOOL)setPickedRouteWithPassword:withPassword:;
- (BOOL)getVolume:forCategory:mode:;
- (id)routeForCategory:;
- (id)volumeCategoryForAudioCategory:;
- (id)pickableRoutesForCategory:;
- (BOOL)overrideToPartnerRoute;
- (BOOL)allowUserToExceedEUVolumeLimit;
- (BOOL)hasRouteSharingPolicyLongFormVideo:;
- (BOOL)shouldClientWithAudioScore:hijackRoute:hijackDeniedReason:;
- (void)handleServerDied;
- (void)postEffectiveVolumeNotification:;
- (void)postFullMuteDidChangeNotification:;
+ (id)sharedInstance;
+ (id)compatibleAudioRouteForRoute:;
+ (void)postNotificationOnMainQueue:notification:object:;
+ (id)sharedAVSystemController;
@end
