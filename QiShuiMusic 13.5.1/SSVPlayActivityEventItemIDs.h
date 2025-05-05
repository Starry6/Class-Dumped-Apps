@interface SSVPlayActivityEventItemIDs : NSObject
@property (nonatomic) Q cloudID;
@property (nonatomic) NSString lyricsID;
@property (nonatomic) q purchasedAdamID;
@property (nonatomic) q radioAdamID;
@property (nonatomic) q equivalencySourceAdamID;
@property (nonatomic) q subscriptionAdamID;
@property (nonatomic) q tvShowPurchasedAdamID;
@property (nonatomic) q tvShowSubscriptionAdamID;
- (unsigned long long)cloudID;
- (id)initWithCoder:;
- (long long)subscriptionAdamID;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)purchasedAdamID;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)_copyWithClass:;
- (id)lyricsID;
- (long long)radioAdamID;
- (long long)equivalencySourceAdamID;
- (long long)tvShowPurchasedAdamID;
- (long long)tvShowSubscriptionAdamID;
+ (BOOL)supportsSecureCoding;
@end
