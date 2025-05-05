@interface MKGeoJSONDecoder : NSObject
- (id)init;
- (id)geoJSONObjectsWithData:error:;
- (id)_decodeFeatureCollection:error:;
+ (id)_decodeGeometry:error:;
+ (id)_decodeGeometryCollection:error:;
@end
