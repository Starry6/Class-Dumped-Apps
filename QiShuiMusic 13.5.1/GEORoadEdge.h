@interface GEORoadEdge : NSObject
@property (nonatomic) GEOMultiSectionFeature road;
@property (nonatomic) Q vertexIndexA;
@property (nonatomic) Q vertexIndexB;
@property (nonatomic) Q junctionIndexA;
@property (nonatomic) Q junctionIndexB;
@property (nonatomic) ^{GeoCodecsConnectivityJunction=II^{GeoCodecsPointFeature}} junctionA;
@property (nonatomic) ^{GeoCodecsConnectivityJunction=II^{GeoCodecsPointFeature}} junctionB;
- (void).cxx_destruct;
- (id)get;
- (id)copyWithZone:;
- (id)init:withMultiSectionFeatureInterface:;
- (void)setMultiSectionFeature:;
- (id)road;
- (unsigned long long)vertexIndexA;
- (unsigned long long)vertexIndexB;
- (unsigned long long)junctionIndexA;
- (unsigned long long)junctionIndexB;
- (id)junctionA;
- (id)junctionB;
@end
