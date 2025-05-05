@interface MKLookAroundGroundViewInfo : NSObject
@property (nonatomic) double startHeading;
@property (nonatomic) double endHeading;
@property (nonatomic) GEOLocationInfo locationInfo;
- (id)locationInfo;
- (void).cxx_destruct;
- (id)initWithStartHeading:endHeading:localityName:locationName:secondaryLocationName:;
- (BOOL)isHeadingInRange:;
- (double)startHeading;
- (double)endHeading;
@end
