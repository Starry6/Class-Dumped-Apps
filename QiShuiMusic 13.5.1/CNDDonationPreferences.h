@interface CNDDonationPreferences : NSObject
@property (nonatomic) NSNotificationCenter notificationCenter;
@property (nonatomic) <CNDonationPreferencesLogger> logger;
@property (nonatomic) @? donationPreferenceCheckingBlock;
@property (nonatomic) @? donationPreferenceSettingBlock;
@property (nonatomic) BOOL donationsEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logger;
- (id)init;
- (id)notificationCenter;
- (void).cxx_destruct;
- (id)description;
- (void)setDonationsEnabled:;
- (BOOL)isDonationsEnabled;
- (id)initWithNotificationCenter:logger:donationPreferenceCheckingBlock:donationPreferenceSettingBlock:;
- (id)donationPreferenceCheckingBlock;
- (id)donationPreferenceSettingBlock;
+ (id)observableWithPreferences:notificationCenter:schedulerProvider:;
@end
