@interface PLRevGeoMapItem : NSObject
@property (nonatomic) NSArray sortedPlaceInfos;
@property (nonatomic) NSArray backupPlaceInfos;
@property (nonatomic) NSArray finalPlaceInfos;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithSortedPlaceInfos:backupPlaceInfos:finalPlaceInfos:;
- (id)sortedPlaceInfos;
- (id)backupPlaceInfos;
- (id)finalPlaceInfos;
+ (BOOL)supportsSecureCoding;
+ (id)placeInfoWithName:geoPlaceInfo:dominantOrderType:;
+ (id)sortedAdditionalPlaceInfoComparator;
+ (id)mapItemWithGEOMapItem:;
@end
