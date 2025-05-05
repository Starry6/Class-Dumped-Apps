@interface VNCluster : NSObject
@property (nonatomic) NSArray objects;
@property (nonatomic) Q clusterId;
@property (nonatomic) Q totalObjectCount;
@property (nonatomic) BOOL shouldUpdateRepresentative;
@property (nonatomic) NSArray suggestedIdsForRepresentative;
@property (nonatomic) NSDictionary representativenessById;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setObjects:;
- (void)encodeWithCoder:;
- (id)objects;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)clusterId;
- (void)setClusterId:;
- (unsigned long long)totalObjectCount;
- (void)setTotalObjectCount:;
- (BOOL)shouldUpdateRepresentative;
- (void)setShouldUpdateRepresentative:;
- (id)suggestedIdsForRepresentative;
- (void)setSuggestedIdsForRepresentative:;
- (id)representativenessById;
- (void)setRepresentativenessById:;
+ (BOOL)supportsSecureCoding;
@end
