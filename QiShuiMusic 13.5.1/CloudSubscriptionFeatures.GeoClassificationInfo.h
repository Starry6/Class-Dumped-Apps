@interface CloudSubscriptionFeatures.GeoClassificationInfo : NSObject
@property (nonatomic) NSString featureKey;
@property (nonatomic) BOOL expired;
@property (nonatomic) Q status;
@property (nonatomic) NSString description;
- (id)init;
- (BOOL)expired;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)status;
- (BOOL)isEqual:;
- (id)featureKey;
+ (BOOL)supportsSecureCoding;
@end
