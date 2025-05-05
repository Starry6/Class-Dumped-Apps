@interface PLRevGeoPlace : NSObject
@property (nonatomic) NSDictionary placeInfosForOrderType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPlaceInfosForOrderType:;
- (id)bestPlaceInfoForOrderType:;
- (id)placeInfosForOrderType;
+ (BOOL)supportsSecureCoding;
+ (id)_newFilterSortedPlaceInfos:usingPlaceAnnotation:outFoundOrderType:outPreviousOrderType:;
+ (id)placeWithMapItem:placeAnnotation:;
+ (unsigned long long)_dominantOrderTypeForPlaceType:lastOrderType:;
@end
