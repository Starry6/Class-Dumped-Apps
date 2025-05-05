@interface CTPriVersion : NSObject
@property (nonatomic) NSNumber majorVersion;
@property (nonatomic) NSNumber minorVersion;
@property (nonatomic) NSNumber releaseVersion;
- (id)majorVersion;
- (id)minorVersion;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setMajorVersion:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setMinorVersion:;
- (id)releaseVersion;
- (void)setReleaseVersion:;
+ (BOOL)supportsSecureCoding;
@end
