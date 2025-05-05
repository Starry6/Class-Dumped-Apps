@interface AMSNetworkConstraints : NSObject
@property (nonatomic) NSMutableDictionary sizeLimits;
@property (nonatomic) BOOL anyNetworkTypeEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (long long)sizeLimitForNetworkType:;
- (BOOL)isEqualToConstraints:;
- (BOOL)isEqual:;
- (id)_initWithStoreConstraintDictionary:;
- (BOOL)isAnyNetworkTypeEnabled;
- (BOOL)hasSizeLimitForNetworkType:;
- (void)_disableAllNetworkTypes;
- (void)_setSizeLimit:forNetworkType:;
- (long long)_sizeLimitForNetworkType:;
- (id)sizeLimits;
- (void)setSizeLimits:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)networkConstraintsForMediaType:withBag:;
+ (id)_networkConstraintsForMediaType:withArray:;
@end
