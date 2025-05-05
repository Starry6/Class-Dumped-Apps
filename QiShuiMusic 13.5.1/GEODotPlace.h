@interface GEODotPlace : NSObject
@property (nonatomic) GEOMapItemIdentifier identifier;
@property (nonatomic) GEOLatLng latLng;
@property (nonatomic) GEOStyleAttributes styleAttributes;
@property (nonatomic) NSString name;
- (id)init;
- (id)latLng;
- (id)identifier;
- (void).cxx_destruct;
- (id)name;
- (id)styleAttributes;
- (id)initWithDotPlace:;
@end
