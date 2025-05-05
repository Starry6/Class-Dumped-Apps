@interface GEOViewportFrame : NSObject
@property (nonatomic) double altitude;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) float heading;
@property (nonatomic) float pitch;
@property (nonatomic) float distance;
- (float)distance;
- (double)altitude;
- (float)heading;
- (double)latitude;
- (float)pitch;
- (double)longitude;
- (id)initWithAltitude:latitude:longitude:heading:pitch:distance:;
- (id)initWithGEOPDViewportFrame:;
@end
