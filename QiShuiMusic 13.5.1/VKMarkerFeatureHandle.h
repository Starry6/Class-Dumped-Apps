@interface VKMarkerFeatureHandle : NSObject
- (int)featureType;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)styleAttributes;
- (long long)featureIndex;
- (int)tileStyle;
- (id)initWithMarkerHandle:featureType:;
- (id)actualHandle;
- (int)tileX;
- (int)tileY;
- (int)tileZ;
- (unsigned int)tileVersion;
@end
