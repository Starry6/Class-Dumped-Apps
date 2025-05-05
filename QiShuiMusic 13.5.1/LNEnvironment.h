@interface LNEnvironment : NSObject
@property (nonatomic) NSMutableDictionary locationAuthorizationStatus;
@property (nonatomic) NSString localeIdentifier;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) CLLocation currentLocation;
@property (nonatomic) NSCalendar calendar;
- (void)setCalendar:;
- (void)setTimeZone:;
- (id)calendar;
- (void)setCurrentLocation:;
- (id)currentLocation;
- (id)locationAuthorizationStatus;
- (id)initWithCoder:;
- (id)initWithLocaleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timeZone;
- (id)localeIdentifier;
- (id)copyWithZone:;
- (id)trimLocation:atKeyPath:againstTCCWithBundleIdentifier:;
- (BOOL)locationAuthorizationStatusForBundleIdentifier:;
- (void)setLocationAuthorizationStatus:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultEnvironment;
@end
