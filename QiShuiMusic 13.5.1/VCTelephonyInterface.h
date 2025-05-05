@interface VCTelephonyInterface : NSObject
@property (nonatomic) <VCTelephonyInterfaceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)unregisterForNotifications;
- (BOOL)registerForNotifications;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)anbrActivationState:enabled:;
- (void)anbrBitrateRecommendation:bitrate:direction:;
- (id)initWithTelephonySubscriptionSlot:;
- (void)getAnbrActivationStateWithCompletionHandler:;
- (void)queryAnbrBitrateRecommendation:direction:completionHandler:;
- (void)handleTelephonyNotification:withInfo:;
- (void)handleVocoderNotificationWithInfo:;
- (id)translateVocoderTypeToCoreAudioType:;
- (void)notifyCodecModeChangeEventToCT:;
+ (long long)ctSubscriptionSlotForSubscriptionSlot:;
+ (int)ctDirectionForTelephonyLinkDirection:;
+ (long long)telephonyLinkDirectionForCtDirection:;
@end
