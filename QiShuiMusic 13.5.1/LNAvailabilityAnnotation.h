@interface LNAvailabilityAnnotation : NSObject
@property (nonatomic) NSString introducedVersion;
@property (nonatomic) NSString deprecatedVersion;
@property (nonatomic) NSString obsoletedVersion;
- (id)_availabilityResultWithSystemVersion:;
- (id)_availabilityResultWithoutSystemVersion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIntroducedVersion:deprecatedVersion:obsoletedVersion:;
- (id)introducedVersion;
- (id)deprecatedVersion;
- (id)obsoletedVersion;
- (id)initWithIntroducedVersion:deprecatedVersion:available:deprecated:;
+ (id)available;
+ (BOOL)supportsSecureCoding;
+ (id)unavailable;
+ (id)deprecated;
@end
