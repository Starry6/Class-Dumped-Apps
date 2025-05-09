@interface ASDAppEvent : NSObject
@property (nonatomic) NSString accountID;
@property (nonatomic) NSString appPlatform;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSString cohort;
@property (nonatomic) NSString deviceVendorID;
@property (nonatomic) q duration;
@property (nonatomic) q foregroundUsage;
@property (nonatomic) NSArray foregroundUsageEvents;
@property (nonatomic) q count;
@property (nonatomic) NSDate date;
@property (nonatomic) q eventSubtype;
@property (nonatomic) NSNumber eventTime;
@property (nonatomic) q eventType;
@property (nonatomic) NSNumber evid;
@property (nonatomic) BOOL hasBeenPosted;
@property (nonatomic) BOOL isBeta;
@property (nonatomic) BOOL isClip;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSString itemName;
@property (nonatomic) NSString shortVersion;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber storefront;
@property (nonatomic) NSString weekStartDate;
- (void)setBundleVersion:;
- (void)setCount:;
- (BOOL)isBeta;
- (void)setEventTime:;
- (id)bundleVersion;
- (void)setStorefront:;
- (id)storefront;
- (id)accountID;
- (void)setAccountID:;
- (id)itemID;
- (void)setStartTime:;
- (long long)eventType;
- (void)setEventType:;
- (id)initWithCoder:;
- (id)eventTime;
- (id)startTime;
- (void)setItemID:;
- (id)date;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (id)itemName;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (long long)count;
- (id)bundleID;
- (long long)duration;
- (id)copyWithZone:;
- (void)setBundleID:;
- (void)setItemName:;
- (id)evid;
- (void)setEvid:;
- (BOOL)isClip;
- (void)setIsClip:;
- (id)appPlatform;
- (void)setAppPlatform:;
- (id)cohort;
- (void)setCohort:;
- (id)deviceVendorID;
- (void)setDeviceVendorID:;
- (long long)foregroundUsage;
- (void)setForegroundUsage:;
- (id)foregroundUsageEvents;
- (void)setForegroundUsageEvents:;
- (long long)eventSubtype;
- (void)setEventSubtype:;
- (BOOL)hasBeenPosted;
- (void)setHasBeenPosted:;
- (void)setIsBeta:;
- (id)shortVersion;
- (void)setShortVersion:;
- (id)weekStartDate;
- (void)setWeekStartDate:;
+ (BOOL)supportsSecureCoding;
@end
