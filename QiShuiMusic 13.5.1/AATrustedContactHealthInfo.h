@interface AATrustedContactHealthInfo : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSDate lastValidCheckTimestamp;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithID:lastValidCheckTimeStamp:;
- (id)lastValidCheckTimestamp;
+ (BOOL)supportsSecureCoding;
@end
