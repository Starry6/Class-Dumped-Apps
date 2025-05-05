@interface AFDeviceContextMetadata : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSDate deliveryDate;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSArray redactedKeyPaths;
@property (nonatomic) AFDeviceContextHistoryConfiguration historyConfiguration;
- (BOOL)isExpiredByDate:;
- (id)backingStore;
- (id)initWithBackingStore:;
- (id)initWithType:deliveryDate:expirationDate:redactedKeyPaths:historyConfiguration:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)historyConfiguration;
- (id)redactedKeyPaths;
- (id)deliveryDate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
