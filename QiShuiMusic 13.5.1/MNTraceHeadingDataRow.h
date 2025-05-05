@interface MNTraceHeadingDataRow : NSObject
@property (nonatomic) double position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double timestamp;
@property (nonatomic) double trueHeading;
@property (nonatomic) double magneticHeading;
@property (nonatomic) double headingAccuracy;
- (double)position;
- (double)headingAccuracy;
- (void)setTimestamp:;
- (double)timestamp;
- (double)trueHeading;
- (double)magneticHeading;
- (void)setHeadingAccuracy:;
- (void)setTrueHeading:;
- (void)setMagneticHeading:;
@end
