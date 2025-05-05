@interface ICMutablePlayActivityEventItemIDs : ICPlayActivityEventItemIDs
@property (nonatomic) Q cloudID;
@property (nonatomic) NSString lyricsID;
@property (nonatomic) q purchasedAdamID;
@property (nonatomic) q radioAdamID;
@property (nonatomic) q equivalencySourceAdamID;
@property (nonatomic) q reportingAdamID;
@property (nonatomic) q subscriptionAdamID;
- (void)setCloudID:;
- (id)copyWithZone:;
- (void)setLyricsID:;
- (void)setPurchasedAdamID:;
- (void)setSubscriptionAdamID:;
- (void)setReportingAdamID:;
- (void)setRadioAdamID:;
- (void)setEquivalencySourceAdamID:;
@end
