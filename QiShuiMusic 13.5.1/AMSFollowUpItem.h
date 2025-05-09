@interface AMSFollowUpItem : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> internalQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> metricsQueue;
@property (nonatomic) ACAccount account;
@property (nonatomic) NSArray actions;
@property (nonatomic) BOOL active;
@property (nonatomic) NSString backingIdentifier;
@property (nonatomic) NSString bundleIconName;
@property (nonatomic) BOOL disableGrouping;
@property (nonatomic) q displayStyle;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString footer;
@property (nonatomic) NSString groupIdentifier;
@property (nonatomic) BOOL hardwareOffer;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString informativeText;
@property (nonatomic) NSString logKey;
@property (nonatomic) AMSMetricsEvent metricsEvent;
@property (nonatomic) q priority;
@property (nonatomic) BOOL shouldPostNotification;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableDictionary userInfo;
- (id)account;
- (BOOL)active;
- (id)informativeText;
- (id)metricsQueue;
- (void)setInformativeText:;
- (void)setAccount:;
- (void)setPriority:;
- (id)groupIdentifier;
- (void)setActions:;
- (id)userInfo;
- (void)setLogKey:;
- (void)setMetricsQueue:;
- (long long)displayStyle;
- (void)setDisplayStyle:;
- (id)logKey;
- (void)setInternalQueue:;
- (id)identifier;
- (void)setExpirationDate:;
- (void)setTitle:;
- (id)expirationDate;
- (void)setFooter:;
- (id)title;
- (id)actions;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)bundleIconName;
- (id)footer;
- (void)setIdentifier:;
- (id)internalQueue;
- (void)setBundleIconName:;
- (long long)priority;
- (id)metricsEvent;
- (void)setMetricsEvent:;
- (id)postMetricsWithBag:;
- (id)postMetricsWithBagContract:;
- (id)backingIdentifier;
- (id)initWithIdentifier:account:priority:;
- (id)initWithFollowUpItem:;
- (id)generateItem;
- (BOOL)shouldOverwriteItem:;
- (BOOL)disableGrouping;
- (void)setDisableGrouping:;
- (BOOL)isHardwareOffer;
- (void)setHardwareOffer:;
- (BOOL)shouldPostNotification;
- (void)setShouldPostNotification:;
+ (id)backingIdentifierForIdentifier:account:;
+ (id)componentsFromBackingIdentifier:;
@end
