@interface LNFocusConfigurationAppContext : LNActionAppContext
@property (nonatomic) NSPredicate notificationFilterPredicate;
@property (nonatomic) NSString targetContentIdentifierPrefix;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithNotificationFilterPredicate:targetContentIdentifierPrefix:;
- (id)notificationFilterPredicate;
- (id)targetContentIdentifierPrefix;
+ (BOOL)supportsSecureCoding;
@end
