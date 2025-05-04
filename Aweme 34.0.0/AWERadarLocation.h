@interface AWERadarLocation : NSObject
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
- (void)setLatitude:;
- (double)latitude;
- (void)setLongitude:;
- (double)longitude;
@end
