@interface ICPlayActivityEventItemIDs : NSObject
@property (nonatomic) Q cloudID;
@property (nonatomic) NSString lyricsID;
@property (nonatomic) q purchasedAdamID;
@property (nonatomic) q radioAdamID;
@property (nonatomic) q equivalencySourceAdamID;
@property (nonatomic) q reportingAdamID;
@property (nonatomic) q subscriptionAdamID;
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
- (long long)reportingAdamID;
- (long long)radioAdamID;
- (long long)equivalencySourceAdamID;
+ (BOOL)supportsSecureCoding;
@end
