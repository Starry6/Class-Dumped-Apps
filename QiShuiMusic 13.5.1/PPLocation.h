@interface PPLocation : NSObject
@property (nonatomic) NSString clusterIdentifier;
@property (nonatomic) CLPlacemark placemark;
@property (nonatomic) S category;
@property (nonatomic) PPLocationRecord mostRelevantRecord;
@property (nonatomic) NSSet featureNames;
- (id)init;
- (id)mostRelevantRecord;
- (id)clusterIdentifier;
- (id)featureValueForName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)featureNames;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToLocation:;
- (id)customizedDescription;
- (BOOL)isEqual:;
- (unsigned short)category;
- (id)copyWithZone:;
- (id)placemark;
- (id)initWithPlacemark:category:mostRelevantRecord:;
+ (BOOL)supportsSecureCoding;
+ (unsigned short)categoryForDescription:;
+ (id)describeCategory:;
+ (id)clusterIdentifierFromPlacemark:;
@end
