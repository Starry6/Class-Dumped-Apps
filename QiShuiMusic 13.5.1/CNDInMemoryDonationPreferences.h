@interface CNDInMemoryDonationPreferences : NSObject
@property (nonatomic) BOOL donationsEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDonationsEnabled:;
- (BOOL)isDonationsEnabled;
+ (id)observableWithPreferences:notificationCenter:schedulerProvider:;
@end
