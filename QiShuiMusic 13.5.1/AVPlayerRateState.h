@interface AVPlayerRateState : NSObject
@property (nonatomic) float rate;
@property (nonatomic) BOOL automaticallyWaitsToMinimizeStalling;
@property (nonatomic) BOOL usesLegacyAutomaticWaitingBehavior;
@property (nonatomic) q timeControlStatus;
@property (nonatomic) NSString reasonForWaitingToPlay;
- (void)dealloc;
- (id)rateStateByUpdatingBasedOnPresenceOfCurrentInterstitialEvent:nameForLogging:;
- (id)rateStateBySettingAutomaticallyWaitsToMinimizeStalling:;
- (float)rate;
- (long long)timeControlStatus;
- (BOOL)automaticallyWaitsToMinimizeStalling;
- (id)rateStateByInferringTimeControlStatusAndWaitingReasonBasedOnPresenceOfCurrentItem:hasCurrentInterstitialEvent:nameForLogging:;
- (BOOL)usesLegacyAutomaticWaitingBehavior;
- (id)rateStateByUpdatingBasedOnFigPlayerPlaybackState:hasCurrentInterstitialEvent:nameForLogging:;
- (id)reasonForWaitingToPlay;
- (id)rateStateBySettingRate:nameForLogging:;
- (id)rateStateBySettingUsesLegacyAutomaticWaitingBehavior:;
- (id)rateStateByUpdatingBasedOnFigPlayer:hasCurrentItem:hasCurrentInterstitialEvent:nameForLogging:;
- (id)initWithAutomaticallyWaitsToMinimizeStalling:usesLegacyAutomaticWaitingBehavior:timeControlStatus:;
- (id)rateStateBySettingTimeControlStatus:reasonForWaitingToPlay:nameForLogging:;
- (id)copyWithZone:;
@end
