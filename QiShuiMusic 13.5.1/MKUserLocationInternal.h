@interface MKUserLocationInternal : NSObject
@property (nonatomic) CLLocation fixedLocation;
@property (nonatomic) CLLocation predictedLocation;
@property (nonatomic) CLHeading heading;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) <MKAnnotationPrivate> annotation;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL updating;
@property (nonatomic) double course;
- (BOOL)isUpdating;
- (id)annotation;
- (double)course;
- (id)heading;
- (void)setHeading:;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setFixedLocation:;
- (void)setTimestamp:;
- (id)title;
- (void)setUpdating:;
- (id)fixedLocation;
- (id)predictedLocation;
- (void).cxx_destruct;
- (double)timestamp;
- (id)subtitle;
- (void)setCourse:;
- (void)setPredictedLocation:;
@end
