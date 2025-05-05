@interface PLQueryCircularRegion : NSObject
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) NSString identifier;
- (double)latitude;
- (id)identifier;
- (double)radius;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)longitude;
- (id)initWithCenterLatitude:centerLongitude:radius:identifier:;
+ (BOOL)supportsSecureCoding;
@end
