@interface PPTripPart : NSObject
@property (nonatomic) NSArray eventIdentifiers;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSString startLocation;
@property (nonatomic) NSString endLocation;
@property (nonatomic) CLPlacemark mainLocation;
@property (nonatomic) NSString fallbackLocationString;
@property (nonatomic) C tripMode;
- (id)endLocation;
- (id)startDate;
- (id)eventIdentifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (id)startLocation;
- (id)initWithStartDate:endDate:eventIdentifiers:mode:location:fallbackLocationString:;
- (id)destinationString;
- (id)mainLocation;
- (void)setMainLocation:;
- (id)fallbackLocationString;
- (void)setFallbackLocationString:;
- (unsigned char)tripMode;
+ (BOOL)supportsSecureCoding;
+ (id)descriptionForTripMode:;
@end
