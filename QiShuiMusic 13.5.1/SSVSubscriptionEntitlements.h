@interface SSVSubscriptionEntitlements : NSObject
@property (nonatomic) NSDate cachedTimestamp;
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSNumber accountStoreFrontIdentifier;
@property (nonatomic) NSString accountISO3Country;
@property (nonatomic) NSArray entitledSubscriptions;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)accountStoreFrontIdentifier;
- (void)setAccountStoreFrontIdentifier:;
- (id)accountISO3Country;
- (void)setAccountISO3Country:;
- (id)entitledSubscriptions;
- (void)setEntitledSubscriptions:;
- (id)cachedTimestamp;
- (void)setCachedTimestamp:;
+ (id)_parseJSONDictionary:;
+ (id)_valueForKey:fromDictionary:ofType:;
@end
