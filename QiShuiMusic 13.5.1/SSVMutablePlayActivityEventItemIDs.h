@interface SSVMutablePlayActivityEventItemIDs : SSVPlayActivityEventItemIDs
@property (nonatomic) Q cloudID;
@property (nonatomic) NSString lyricsID;
@property (nonatomic) q purchasedAdamID;
@property (nonatomic) q radioAdamID;
@property (nonatomic) q equivalencySourceAdamID;
@property (nonatomic) q subscriptionAdamID;
@property (nonatomic) q tvShowPurchasedAdamID;
@property (nonatomic) q tvShowSubscriptionAdamID;
- (void)setCloudID:;
- (id)copyWithZone:;
- (void)setLyricsID:;
- (void)setPurchasedAdamID:;
- (void)setSubscriptionAdamID:;
- (void)setRadioAdamID:;
- (void)setEquivalencySourceAdamID:;
- (void)setTvShowPurchasedAdamID:;
- (void)setTvShowSubscriptionAdamID:;
@end
