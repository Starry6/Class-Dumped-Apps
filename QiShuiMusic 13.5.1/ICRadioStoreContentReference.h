@interface ICRadioStoreContentReference : ICRadioContentReference
@property (nonatomic) NSNumber storeIdentifier;
@property (nonatomic) NSString containerID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storeIdentifier;
- (id)containerID;
- (void)setContainerID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithStoreIdentifier:;
- (id)copyWithZone:;
- (void)setStoreIdentifier:;
- (id)rawContentDictionaryWithSubscriptionStatus:;
- (id)matchDictionaryWithSubscriptionStatus:;
+ (BOOL)supportsSecureCoding;
@end
