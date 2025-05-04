@interface AWEFeedNearbyFeatureModel : AWEFeedSequenceFeatureModel
@property (nonatomic) Q poi_act;
@property (nonatomic) NSString distance_raw;
@property (nonatomic) NSString distance;
@property (nonatomic) NSString poi_id;
@property (nonatomic) NSString poi_type_code;
- (void)updateFeature:forKey:extra:;
- (void)setDistance_raw:;
- (void)setPoi_id:;
- (void)setPoi_type_code:;
- (void)setPoi_act:;
- (unsigned long long)poi_act;
- (id)distance_raw;
- (id)poi_id;
- (id)poi_type_code;
- (void)setDistance:;
- (id)distance;
- (void).cxx_destruct;
@end
