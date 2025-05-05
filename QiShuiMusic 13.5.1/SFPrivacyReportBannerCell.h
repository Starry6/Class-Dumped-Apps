@interface SFPrivacyReportBannerCell : SFInteractiveBannerCell
@property (nonatomic) q numberOfTrackers;
- (void)_setAction:text:;
- (void)setModel:;
- (void)_updateState;
- (id)initWithFrame:;
- (long long)numberOfTrackers;
- (void)_privacyProxyAvailabilityChanged:;
- (void)setNumberOfTrackers:;
+ (id)reuseIdentifier;
@end
