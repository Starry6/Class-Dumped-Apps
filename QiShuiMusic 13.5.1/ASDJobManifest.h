@interface ASDJobManifest : NSObject
@property (nonatomic) q manifestType;
@property (nonatomic) NSNumber purchaseID;
@property (nonatomic) NSString storeCorrelationID;
- (id)purchaseID;
- (id)init;
- (id)initWithCoder:;
- (void)setPurchaseID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)copyWithZone:;
- (id)addActivity:;
- (id)initWithManifestType:;
- (void)enumerateActivitiesUsingBlock:;
- (void)addActivity:withIdentifier:;
- (long long)manifestType;
- (id)storeCorrelationID;
- (void)setStoreCorrelationID:;
+ (BOOL)supportsSecureCoding;
@end
