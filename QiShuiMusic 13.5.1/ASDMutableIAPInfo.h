@interface ASDMutableIAPInfo : ASDIAPInfo
@property (nonatomic) NSNumber adamId;
@property (nonatomic) NSNumber appAdamId;
@property (nonatomic) BOOL autoRenewStatus;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSDate lastModifiedDate;
@property (nonatomic) NSDate purchaseDate;
@property (nonatomic) C type;
@property (nonatomic) BOOL hasUsedFreeOffer;
@property (nonatomic) BOOL hasUsedIntroPricingOffer;
@property (nonatomic) NSString subscriptionFamilyId;
@property (nonatomic) NSNumber expirationTimestamp;
@property (nonatomic) NSNumber lastModifiedTimestamp;
@property (nonatomic) NSNumber purchaseTimestamp;
- (void)setExpirationTimestamp:;
- (void)setLastModifiedTimestamp:;
- (void)setPurchaseTimestamp:;
@end
