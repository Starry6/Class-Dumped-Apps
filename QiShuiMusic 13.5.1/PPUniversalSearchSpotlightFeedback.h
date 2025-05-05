@interface PPUniversalSearchSpotlightFeedback : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) I offeredCSSICount;
@property (nonatomic) I engagedCSSICount;
@property (nonatomic) NSString clientBundleId;
@property (nonatomic) NSDate timestamp;
- (id)clientBundleId;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setClientIdentifier:;
- (id)timestamp;
- (id)description;
- (id)clientIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOfferedCSSICount:engagedCSSICount:;
- (id)initWithOfferedCSSICount:engagedCSSICount:timestamp:clientIdentifier:clientBundleId:;
- (BOOL)isEqualToPPUniversalSearchSpotlightFeedback:;
- (unsigned int)offeredCSSICount;
- (unsigned int)engagedCSSICount;
+ (BOOL)supportsSecureCoding;
@end
