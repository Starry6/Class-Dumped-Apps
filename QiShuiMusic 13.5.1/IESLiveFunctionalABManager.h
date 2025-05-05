@interface IESLiveFunctionalABManager : NSObject
+ (id)liveAudioFeedbackConfig;
+ (id)liveBackgroundSwitch;
+ (BOOL)liveDislikeNewTrackContext;
+ (BOOL)liveFeedbackEnableRoomControl;
+ (BOOL)liveFeedbackPaymentBehavior;
+ (long long)liveFeedbackRoomControlGap;
+ (id)liveLightFeedbackConfig;
+ (id)liveLightFeedbackConfigV2;
+ (id)liveLongPressDislike;
+ (id)liveLongPressUnLoginConfig;
+ (int)liveNewLongPressPanelConfig;
+ (id)livePublicScreenEmojiFeedbackConfig;
@end
