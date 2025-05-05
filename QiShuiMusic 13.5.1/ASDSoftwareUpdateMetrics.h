@interface ASDSoftwareUpdateMetrics : NSObject
@property (nonatomic) NSDate lastUpdateCheck;
@property (nonatomic) NSDate nextUpdateCheck;
@property (nonatomic) BOOL usingModernUpdatesCheck;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)lastUpdateCheck;
- (void)setLastUpdateCheck:;
- (id)nextUpdateCheck;
- (void)setNextUpdateCheck:;
- (BOOL)usingModernUpdatesCheck;
- (void)setUsingModernUpdatesCheck:;
+ (BOOL)supportsSecureCoding;
@end
