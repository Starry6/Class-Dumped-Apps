@interface IESMMDLInfo : NSObject
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double heading;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double timeStamp;
- (double)heading;
- (double)horizontalAccuracy;
- (void)setHeading:;
- (double)latitude;
- (void)setLatitude:;
- (void)setHorizontalAccuracy:;
- (void)setLongitude:;
- (double)timeStamp;
- (double)longitude;
- (void)setTimeStamp:;
@end
