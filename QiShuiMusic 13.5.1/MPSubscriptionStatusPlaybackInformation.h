@interface MPSubscriptionStatusPlaybackInformation : NSObject
@property (nonatomic) BOOL definitiveInformation;
@property (nonatomic) BOOL hasPlaybackCapability;
@property (nonatomic) BOOL requiresCarrierManualVerification;
@property (nonatomic) BOOL shouldUseLease;
@property (nonatomic) BOOL shouldUseAccountLessStreaming;
@property (nonatomic) BOOL shouldRequirePlaybackAuthorizationTokensForPlayback;
- (BOOL)shouldUseLease;
- (BOOL)shouldUseAccountLessStreaming;
- (BOOL)shouldRequirePlaybackAuthorizationTokensForPlayback;
- (BOOL)hasPlaybackCapability;
- (BOOL)isDefinitiveInformation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithICSubscriptionStatus:;
- (BOOL)requiresCarrierManualVerification;
@end
