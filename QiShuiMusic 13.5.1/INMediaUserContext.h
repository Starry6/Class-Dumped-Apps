@interface INMediaUserContext : INUserContext
@property (nonatomic) q subscriptionStatus;
@property (nonatomic) NSNumber numberOfLibraryItems;
- (long long)subscriptionStatus;
- (id)init;
- (void)setSubscriptionStatus:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)safeLibraryItems;
- (id)numberOfLibraryItems;
- (void)setNumberOfLibraryItems:;
+ (long long)_type;
+ (BOOL)supportsSecureCoding;
+ (id)_sharedFormatter;
@end
