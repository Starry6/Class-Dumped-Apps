@interface FAPropertyEligibilityRequirements : NSObject
@property (nonatomic) NSString propertyName;
@property (nonatomic) BOOL hasRecommendedMembers;
@property (nonatomic) NSString expectedMediaAltDSID;
@property (nonatomic) BOOL serverEligibility;
@property (nonatomic) NSArray activeBundleIDs;
@property (nonatomic) @ serverPayload;
- (BOOL)serverEligibility;
- (id)propertyName;
- (id)initWithPropertyName:dictionaryRepresentation:;
- (id)initWithPropertyName:hasRecommendedMembers:expectedMediaAltDSID:serverEligibility:activeBundleIDs:serverPayload:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)expectedMediaAltDSID;
- (void).cxx_destruct;
- (id)activeBundleIDs;
- (id)serverPayload;
- (BOOL)hasRecommendedMembers;
+ (BOOL)supportsSecureCoding;
@end
