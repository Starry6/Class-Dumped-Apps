@interface GEOMapItemBuilder : NSObject
@property (nonatomic) GEOLocation location;
@property (nonatomic) NSInteger referenceFrame;
@property (nonatomic) GEOAddress address;
@property (nonatomic) GEOMapRegion mapRegion;
@property (nonatomic) GEOLatLng latlng;
@property (nonatomic) NSString name;
- (void)setReferenceFrame:;
- (id)init;
- (void)setName:;
- (id)mapRegion;
- (void)setAddress:;
- (id)build;
- (int)referenceFrame;
- (void)setLatlng:;
- (id)location;
- (void)setMapRegion:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)address;
- (id)name;
- (id)latlng;
+ (id)buildWithSetterBlock:;
@end
